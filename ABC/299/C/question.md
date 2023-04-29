
<p>配点 : <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>300</mn></mrow><annotation encoding="application/x-tex">300</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">3</span><span class="mord">0</span><span class="mord">0</span></span></span></span></span></var> 点</p>

<div class="part">
<section>
<h3>問題文</h3><p>正の整数 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>L</mi></mrow><annotation encoding="application/x-tex">L</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal">L</span></span></span></span></span></var> に対して、
レベル <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>L</mi></mrow><annotation encoding="application/x-tex">L</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal">L</span></span></span></span></span></var> のダンゴ文字列とは、以下の条件を満たす文字列です。</p>
<ul>
<li><code>o</code> と <code>-</code> からなる長さ <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>L</mi><mo>+</mo><mn>1</mn></mrow><annotation encoding="application/x-tex">L+1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.76666em; vertical-align: -0.08333em;"></span><span class="mord mathnormal">L</span><span class="mspace" style="margin-right: 0.222222em;"></span><span class="mbin">+</span><span class="mspace" style="margin-right: 0.222222em;"></span></span><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span></span></span></span></span></var> の文字列である。</li>
<li>先頭の文字と末尾の文字のうちちょうど一方が <code>-</code> であり、そのほかの <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>L</mi></mrow><annotation encoding="application/x-tex">L</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal">L</span></span></span></span></span></var> 文字はすべて <code>o</code> である。</li>
</ul>
<p>例えば、<code>ooo-</code> はレベル <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">3</span></span></span></span></span></var> のダンゴ文字列ですが、<code>-ooo-</code> や <code>oo</code> や <code>o-oo-</code> などはダンゴ文字列ではありません（より正確には、どのような正の整数 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>L</mi></mrow><annotation encoding="application/x-tex">L</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal">L</span></span></span></span></span></var> に対してもレベル <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>L</mi></mrow><annotation encoding="application/x-tex">L</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal">L</span></span></span></span></span></var> のダンゴ文字列ではありません）。</p>
<p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> 種類の文字 <code>o</code> <code>-</code> からなる、長さ <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span></var> の文字列 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> が与えられます。
次の条件を満たすような正整数 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>X</mi></mrow><annotation encoding="application/x-tex">X</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.07847em;">X</span></span></span></span></span></var> のうち、最大のものを求めてください。</p>
<ul>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> の連続する部分文字列であって、レベル <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>X</mi></mrow><annotation encoding="application/x-tex">X</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.07847em;">X</span></span></span></span></span></var> のダンゴ文字列であるものが存在する。</li>
</ul>
<p>ただし、そのような整数が存在しない場合、<code>-1</code> と出力してください。</p>
</section>
</div>

<div class="part">
<section>
<h3>制約</h3><ul>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>2</mn><mo>×</mo><mn>1</mn><msup><mn>0</mn><mn>5</mn></msup></mrow><annotation encoding="application/x-tex">1\leq N\leq 2\times10^5</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.78041em; vertical-align: -0.13597em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.277778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.13597em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.277778em;"></span></span><span class="base"><span class="strut" style="height: 0.72777em; vertical-align: -0.08333em;"></span><span class="mord">2</span><span class="mspace" style="margin-right: 0.222222em;"></span><span class="mbin">×</span><span class="mspace" style="margin-right: 0.222222em;"></span></span><span class="base"><span class="strut" style="height: 0.814108em; vertical-align: 0em;"></span><span class="mord">1</span><span class="mord"><span class="mord">0</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span class="vlist" style="height: 0.814108em;"><span class="" style="top: -3.063em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">5</span></span></span></span></span></span></span></span></span></span></span></span></var></li>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> は <code>o</code> <code>-</code> からなる長さ <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span></var> の文字列</li>
</ul>
</section>
</div>

<hr>
<div class="io-style">
<div class="part">
<section>
<h3>入力</h3><p>入力は以下の形式で標準入力から与えられる。</p>
<pre><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span></var>
<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var>
</pre>
</section>
</div>

<div class="part">
<section>
<h3>出力</h3><p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> にレベル <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>X</mi></mrow><annotation encoding="application/x-tex">X</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.07847em;">X</span></span></span></span></span></var> のダンゴ文字列が含まれるような最大の <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>X</mi></mrow><annotation encoding="application/x-tex">X</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.07847em;">X</span></span></span></span></span></var> の値を <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span></span></span></span></span></var> 行で出力せよ。
そのような値が存在しない場合、<code>-1</code> を出力せよ。</p>
</section>
</div>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 1 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 53px;">10
o-oooo---o
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 1 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">4
</textarea>
<p>たとえば、<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> の <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">3</span></span></span></span></span></var> 文字目から <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>7</mn></mrow><annotation encoding="application/x-tex">7</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">7</span></span></span></span></span></var> 文字目までに対応する部分文字列 <code>oooo-</code> は、レベル <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>4</mn></mrow><annotation encoding="application/x-tex">4</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">4</span></span></span></span></span></var> のダンゴ文字列です。
<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> の部分文字列であってレベル <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>5</mn></mrow><annotation encoding="application/x-tex">5</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">5</span></span></span></span></span></var> 以上のダンゴ文字列であるようなものは存在しないため、<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>4</mn></mrow><annotation encoding="application/x-tex">4</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">4</span></span></span></span></span></var> と出力してください。</p>
</section>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 2 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 53px;">1
-
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 2 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">-1
</textarea>
<p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> の連続する部分文字列は空文字列と <code>-</code> の <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> 種類だけです。
これらはダンゴ文字列ではないため、<code>-1</code> と出力してください。</p>
</section>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 3 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 53px;">30
-o-o-oooo-oo-o-ooooooo--oooo-o
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 3 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">7
</textarea></section>
</div>
