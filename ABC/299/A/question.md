
<p>配点 : <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>100</mn></mrow><annotation encoding="application/x-tex">100</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span><span class="mord">0</span><span class="mord">0</span></span></span></span></span></var> 点</p>

<div class="part">
<section>
<h3>問題文</h3><p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">3</span></span></span></span></span></var> 種類の文字 <code>.</code> <code>|</code> <code>*</code> からなる、長さ <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span></var> の文字列 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> が与えられます。
<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> には <code>|</code> がちょうど <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> つ、<code>*</code> がちょうど <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span></span></span></span></span></var> つ含まれます。</p>
<p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> つの <code>|</code> で囲まれた部分の中に <code>*</code> が含まれるか判定してください。
含まれている場合 <code>in</code> と、含まれていない場合 <code>out</code> と出力してください。</p>
<p>より厳密には、<code>*</code> より前にある文字のいずれかが <code>|</code> であり、かつ、<code>*</code> より後ろにある文字のいずれかが <code>|</code> であるか判定してください。</p>
</section>
</div>

<div class="part">
<section>
<h3>制約</h3><ul>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>100</mn></mrow><annotation encoding="application/x-tex">3\leq N\leq 100</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.78041em; vertical-align: -0.13597em;"></span><span class="mord">3</span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.277778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.13597em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.277778em;"></span></span><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span><span class="mord">0</span><span class="mord">0</span></span></span></span></span></var></li>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span></var> は整数</li>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> は <code>.</code> <code>|</code> <code>*</code> からなる長さ <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span></var> の文字列</li>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> に <code>|</code> はちょうど <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> 個含まれる</li>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> に <code>*</code> はちょうど <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span></span></span></span></span></var> 個含まれる</li>
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
<h3>出力</h3><p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> つの <code>|</code> に囲まれた部分の中に <code>*</code> が含まれている場合 <code>in</code> と、含まれていない場合 <code>out</code> と <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span></span></span></span></span></var> 行に出力せよ。</p>
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
.|..*...|.
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 1 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">in
</textarea>
<p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> つの <code>|</code> に囲まれた部分は <code>|..*...|</code> です。
この中に <code>*</code> が含まれているため、<code>in</code> と出力してください。</p>
</section>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 2 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 53px;">10
.|..|.*...
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 2 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">out
</textarea>
<p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> つの <code>|</code> に囲まれた部分は <code>|..|</code> です。
この中に <code>*</code> は含まれていないため、<code>out</code> と出力してください。</p>
</section>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 3 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 53px;">3
|*|
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 3 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">in
</textarea></section>
</div>
