## IPv4
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, Bitwise Operations, Basic Types  
Problem ID: [tYhS8h3_X0mv](https://ckj.imslab.org/#/problems/tYhS8h3_X0mv)  
</details>

### Description
**網際網路通訊協定第四版 (Internet Protocol version 4, IPv4)**，是網際網路發展過程中第一個被廣泛佈署與使用的通訊協定。IPv4 定義了網路上的裝置如何傳遞資料給彼此，是串起整個網路世界最重要的一套協定。

就像郵差要送信到你家時，必須事先知道你家的地址一樣，網際網路上的資料在不同電腦之間傳輸時，也必須要知道送信人跟收信人彼此的地址是多少。根據 IPv4 的規範，每一台要連上網路的裝置都必須要有一個獨一無二的地址，稱作 **IP 位址**。IP 位址的長度為 **32 位元 (bits)**，可以表示成一個 **8 位數的十六進制數字**。但是為了人類閱讀方便，我們通常會把這 32 個位元看成 **4 個位元組 (bytes)**，再把每一個位元組用十進制表示，變成**點分十進制**的格式。例如：每台電腦都有的本機環回位址為：


```
01111111 00000000 00000000 00000001 (7F000001)
```
但我們通常不這樣寫，我們習慣寫成：


```
127.0.0.1
```
因為 `01111111` 的十進制表示法是 `127`，`00000000` 是 `0`，`00000001` 則是 `1`，因此 `01111111 00000000 00000000 00000001` 才會被寫成 `127.0.0.1`。

現在，給你一個十六進制表示法的 IP 位址，請你將它轉換成我們習慣的點分十進制表示法。

**Internet Protocol version 4 (IPv4)** is one of the most important protocols connecting the whole cyber world. It defines a set of rules of how computers on the Internet communicate with each other.

Just like a mailman needs to know the address of your house to deliver your mail, computers on the Internet need to know the address of others so they can transmit data. According to IPv4, every computer that want to connect to other computers requires an unique address, as known as **IP address**. An IP address is **a 32 bits data**, which can be represented in **an 8 digit hexadecimal number**. But for better human reliability, they are most often written in **dot-decimal notation**, which can be obtained by separating the 32 bits address into **4 octets (bytes)**, converting each octet to a decimal number, and concatenating these decimal numbers with periods. For example, the localhost of a computer is:


```
01111111 00000000 00000000 00000001 (7F000001)
```
But it is more common to write it as


```
127.0.0.1
```
Since `01111111` is `127` in decimal, `00000000` is `0`, and `00000001` is `1`, the address `01111111 00000000 00000000 00000001` can be written as `127.0.0.1`.

Now, given an IP address in hexadecimal format, please convert them into the dot-decimal notation.


### Input
一個 8 位數的十六進制數字。
An 8 digit hexadecimal number.
### Output
一個以點分十進制表示的 IP 位址。
An IP address in dot-decimal notation.

### Example 1
#### Input
```
7f000001
```
#### Output
```
127.0.0.1
```

### Example 2
#### Input
```
c0a8d097
```
#### Output
```
192.168.208.151
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
