## [20 Points] URL Search Parameter Parser
<details>
<summary>Details</summary>

Level: Medium  
Tags: Malloc, Struct, String, Pointers, Loop, If/else  
Problem ID: [8tRlncuo7h7W](https://ckj.imslab.org/#/problems/8tRlncuo7h7W)  
</details>

### Description
在 [windows.location](https://ckj.imslab.org/#/problems/RS_5xkB0PF-1) 裡面有提及，在網址不同的位置，會處存不同的資訊，現在我們要來處理 **查詢字串** 欄位的資訊。

一個查詢字串是由多組的 鍵 (key) / 值 (value) 所構成。  
在查詢字串內，鍵/值 的格式為 `[鍵]=[值]`，且每組 鍵/值 會以 `&` 分開

以下範例為包含多組 鍵/值 的網址:  
`https://www.abc.com/photo?from=20180101&to=20201231#favorite`  
範例中查詢字串的部分為 `from=20180101&to=20201231`，  
當中包含兩組 鍵/值，分別為

* `from=20180101`
* `to=20201231`

在同一網址中，若有重複出現相同**鍵**的情形，通常會只使用**較早出現**的 鍵/值 內容，舉例來說，在 `foo=bar&foo=baz` 這個查詢字串的部分，`foo` 的值會是 `bar`。

在查詢字串的欄位中，也有機會出現只有**鍵**，而**值**則為空字串的情形，舉例來說，在 `foo=&bar=123` 這個查詢字串內，`foo` 的值會是 (空字串，長度為 0)。

在網頁的應用上，查詢字串常常會被使用在想要向伺服器要求特定資料時，如以下的網址：  
`http://www.abc.com/profile?userid=10`  
在這裡，可以猜測使用者試圖使用這個網址獲得 `userid` 為 `10` 的使用者資料。

現在給定一串合法的網址與一個想要查詢的**鍵** ，請你印出相對應**值**的內容，若想要查詢的**鍵**不存在，請印出 `404 Not Found`。

網址的格式為：`通訊協定://主機名稱[:通訊埠][/所在路徑][?查詢字串][#識別符號]`，其中 `[]` 中為可省略之元素，即不一定會出現。



---

As mentioned in [windows.location](http://127.0.0.1/?bar=123&zoo=456), there are different information stored in different position of url. Now we are going to parse the content of **search** section, which is also known as **query string**.

A **search** part is composed of key/value pairs. The format of each pair is `[key]=[value]` and separated by `&`.

Following is an example url that contains multiple key/value pairs.  
`https://www.abc.com/photo?from=20180101&to=20201231#favorite`  
The search part of the url is `from=20180101&to=20201231` that includes two pairs of key/value:

* `from=20180101`
* `to=20201231`

If there is duplicated key, the first key/value pair of the key should be kept. For instance, if we search `foo` with in `foo=bar&foo=baz`, the result will be `bar`.

It is possible that the `value` field is empty. Take `foo=&bar=123` as example, the value of `foo` will be (empty string).

A common application of the search part of a url is for querying specific data. For example, with the following url:  
`http://www.abc.com/profile?userid=10`  
We may assume the profile of the user with `userid` is `10` will be returned from the host `www.abc.com`.

Please print the corresponding key/value pair of the given key from the provided url. If the required key does not exist, `404 Not Found` should be printed.

The format of the url is: `portocol://host[:port][/pathname][?search][#hash]`, where the components enclosed by `[]` are optional, that is, may not be provided in the url.


### Input
第一個字串代表輸入的 URL，長度介於 10 ~ 2048 個字元，並且使用換行符號結尾
第二個字串代表指定的 key，長度介於 1 ~ 100 個字元

The first string indicates url, which is composed of 10-2048 characters.
The second string indicates key, which is composed of 1-100 characters.
### Output
若在 url 中有找到對應的 鍵/值，依照格式印出 鍵/值
格式為 key:[key], value:[value]
若沒有找到，則印出 404 Not Found

If the key can be found in url, print key/value with following format:
“key:[key], value[value]”
Otherwise, print “404 Not Found”.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define URL_MAX 2048
#define KEY_MAX 100

typedef struct search_s {
    char *key;
    char *value;
} search_t;

search_t *get_param_by_key(char *url, char *key);

int main ()
{
    char url[URL_MAX + 1], key[KEY_MAX + 1];

    fgets(url, URL_MAX, stdin);
    scanf("%s", key );

    search_t  *param = get_param_by_key (url, key);

    if (param)
        printf("key: %s, value: %s", param->key, param->value);
    else
        printf("404 Not Found");
}
```
</details>


### Example 1
#### Input
```
https://web.ncku.edu.tw/index.php?Lang=zh-tw
language
```
#### Output
```
404 Not Found
```

### Example 2
#### Input
```
http://test.com/?pet=cat&pet=dog&userid=1
pet
```
#### Output
```
key: pet, value: cat
```

### Example 3
#### Input
```
https://test/haha/
key
```
#### Output
```
404 Not Found
```

### Example 4
#### Input
```
http://127.0.0.1/?meow=zoo&bar=123&zoo=456#shop
zoo
```
#### Output
```
key: zoo, value: 456
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
