# 身分證字號檢查
<div data-step="14" data-intro="<p>描述中 <i class='fa fa-clipboard'></i> 按鈕可協助你複製到剪貼簿，並貼到本機實驗。</p> <p>若題目有特殊的字元格式，那在範例輸入/輸出測資不適用複製貼上，請務必小心</p>">
<p>身分證字號是由一位英文與九位數字組成。</p>
<p>其中英文的部分可以根據下列的對照表轉換為一個二位數字：</p>
<table class="pure-table pure-table-bordered"><thead><tr>
<th>英文</th>
<th>數字</th>
<th>英文</th>
<th>數字</th>
</tr>
</thead><tbody><tr>
<td>A</td>
<td>10</td>
<td>N</td>
<td>22</td>
</tr>
<tr>
<td>B</td>
<td>11</td>
<td>O</td>
<td>35</td>
</tr>
<tr>
<td>C</td>
<td>12</td>
<td>P</td>
<td>23</td>
</tr>
<tr>
<td>D</td>
<td>13</td>
<td>Q</td>
<td>24</td>
</tr>
<tr>
<td>E</td>
<td>14</td>
<td>R</td>
<td>25</td>
</tr>
<tr>
<td>F</td>
<td>15</td>
<td>S</td>
<td>26</td>
</tr>
<tr>
<td>G</td>
<td>16</td>
<td>T</td>
<td>27</td>
</tr>
<tr>
<td>H</td>
<td>17</td>
<td>U</td>
<td>28</td>
</tr>
<tr>
<td>I</td>
<td>34</td>
<td>V</td>
<td>29</td>
</tr>
<tr>
<td>J</td>
<td>18</td>
<td>W</td>
<td>32</td>
</tr>
<tr>
<td>K</td>
<td>19</td>
<td>X</td>
<td>30</td>
</tr>
<tr>
<td>L</td>
<td>20</td>
<td>Y</td>
<td>31</td>
</tr>
<tr>
<td>M</td>
<td>21</td>
<td>Z</td>
<td>33</td>
</tr>
</tbody></table><p>再加上其後的九位數字，可以形成一個11位的數字。</p>
<p>比如A123456789可以轉換為10123456789，而身份證字號的檢查方式是將從左至右的每一位數分別乘上1, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1後，</p>
<p>相加的結果檢查是否是10的倍數以判斷是否為一個合法的身分證字號。</p>
<table class="pure-table pure-table-bordered"><thead><tr>
<th>原始身份證字號</th>
<th>1</th>
<th>0</th>
<th>1</th>
<th>2</th>
<th>3</th>
<th>4</th>
<th>5</th>
<th>6</th>
<th>7</th>
<th>8</th>
<th>9</th>
</tr>
</thead><tbody><tr>
<td>倍率</td>
<td>1</td>
<td>9</td>
<td>8</td>
<td>7</td>
<td>6</td>
<td>5</td>
<td>4</td>
<td>3</td>
<td>2</td>
<td>1</td>
<td>1</td>
</tr>
<tr>
<td>相乘</td>
<td>1</td>
<td>0</td>
<td>8</td>
<td>14</td>
<td>18</td>
<td>20</td>
<td>20</td>
<td>18</td>
<td>14</td>
<td>8</td>
<td>9</td>
</tr>
</tbody></table><p>相加的結果為130，是10的倍數，所以是一個合法的身分證字號。</p>
<p>現在我們用1-26代表A-Z的字母，請判段輸入的身分證字號是否為一個正確的身分證字號。</p>
<p>若是正確的則輸出1，不正確則輸出0，其中一個輸出一行。</p>
<h2 class="content-subhead">Sample Input</h2><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_511943" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">1 123456789</code></div><div class="line number2 index1 alt1"><code class="plain">2 234567890</code></div></div></td></tr></tbody></table></div></code></pre>
<h2 class="content-subhead">Sample Output</h2><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_981614" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">1</code></div><div class="line number2 index1 alt1"><code class="plain">0</code></div></div></td></tr></tbody></table></div></code></pre></div>
