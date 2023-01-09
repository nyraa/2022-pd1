## [25 Points] Shopping in Japan
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, Expression, If/else, Basic Types  
Problem ID: [RNP34mvqd-w3](https://ckj.imslab.org/#/problems/RNP34mvqd-w3)  
</details>

### Description
日幣好便宜啊，好想飛到日本買買買買買買（以下略）

在日本購物時，我們所使用的幣種是日幣。我們可以在銀行當中用新臺幣購買日幣，購買的價格會由當下**日幣對新臺幣的匯率**決定，其計算公式為：


```
日幣金額 * 日幣對新臺幣匯率 = 新臺幣金額
```
舉例來說：當日幣對新臺幣匯率是 0.3025 時，若我想要購買日幣 10000 元，那我就必須支付 10000 \* 0.3025 = 新臺幣 3025 元。

而在日本國內，所有商品都會被課徵消費稅。在購買物品時除了支付物品本身的價值之外，還需要再另外支付稅金給日本政府，所需要支付的稅額由當下的**消費稅率**所決定。商品在被課徵消費稅之前的價格稱作未稅價（稅前價），課徵消費稅之後的總價叫作含稅價（稅後價），其轉換公式為：


```
含稅價 = 未稅價 * (1 + 消費稅率)
```
舉例來說：當消費稅率是 5% 時，若一瓶礦泉水未稅價是日幣 100 元，那麼含稅價就是 100 \* (1 + 5%) = 日幣 105 元。

2019 年 8 月 9 號時，日幣對新臺幣的匯率達到了近五年來的高點 0.2966，當時日本國內的消費稅率還只有 8%。到今天 2022 年 11 月 3 日，日幣對新臺幣的匯率是 0.2178，但日本國內的消費稅已經變成了 10% 。**已知外國人在日本國內單筆消費未稅價若超過 5000 日元，可以免計消費稅**，請問購買一樣未稅價 `x` 日元的物品，現在買比起在 2019 年的時候買還要便宜了多少新臺幣呢？

**注意**：日幣跟新臺幣最小的單位都是 1 元，因此在計算價格時必須四捨五入。你可以使用 <math.h> 當中的 `lround()` 函式。

Oh gosh, the price of Japanese Yen is sooooo low. Gotta fly to Japan for a shopping spree!

The official currency of Japan is Japanese Yen (yen). In Taiwan, you can buy yen with New Taiwan Dollars (NTD) at banks. The price of yen is determined by the **Japanese Yen to New Taiwan Dollar exchange rate** at the time. The conversion is as follows:


```
price of yen * exchange rate = price of NTD
```
For example: when the exchange rate is 0.3025, if you want to buy JPY ¥10000, then you need to spend 10000 \* 0.3025 = NTD $3025.

When you go shopping in Japan, all goods and services are subject to consumption tax. When purchasing items, in addition to paying the value of the item itself, you need to pay the Japanese government additional taxes. The amount of taxes you need to pay is determined by the **consumption tax rate**. The relation of the price before tax and the price after tax is as follows:


```
price after tax = price before tax * (1 + tax rate)
```
For example: when the tax rate is 5%, if the price before tax of a bottled water is JPY ¥100, then the price after tax is 100 \* (1 + 5%) = JPY ¥105.

For the past 5 years, the highest Japanese Yen to New Taiwan Dollar exchange rate occured at 2019/08/09, the exchange rate at that day was 0.2966. At the time, the consumption tax rate in Japan was 8%. Recently, yen price keeps falling. The exchange rate came to 0.2178 at 2022/11/03, but the consumption tax rate has raised to 10%. **A good news is,** **for foreigners, purchases over 5000 yen (before tax) are Tax-Free. That is, if the price before tax is greater than 5000 yen for a purchase, than you don't need to pay for the taxes for this purchase.** With these information, if one want to buy a item whose price before tax in yen is `x`, and he/she is paying with NTD, how much cheaper is it if he/she buy it at 2022 rather than in 2019?

**Note:** The currency units of both yen and NTD is 1 (i.e. no such thing that is JPY ¥100.5 or NTD $39.99). Therefore, you need to round the prices to the nearest tenth when calculating. You can use the `lround()` function defined in <math.h>.


### Input
一個整數 `x`，代表商品的日幣未稅價。 1 <= x <= 10000。
One integer `x` representing the price before tax in yen, where 1 <= x <= 10000.
### Output
一個正整數，代表兩個時間點的新台幣價差。
One positive integer representing the price difference in New Taiwan dollar.

### Example 1
#### Input
```
34
```
#### Output
```
3
```

### Example 2
#### Input
```
6602
```
#### Output
```
520
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
在計算過程中，日幣稅前價、日幣稅後價以及台幣價格皆為整數。 In the calculation, the price before tax in yen, the price after tax in yen and the price in NTD all need to be integers.
</details>
