
<p>配点 : <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>500</mn></mrow><annotation encoding="application/x-tex">500</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">5</span><span class="mord">0</span><span class="mord">0</span></span></span></span></span></var> 点</p>

<div class="part">
<section>
<h3>問題文</h3><p>英小文字のみからなる文字列 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> が与えられます。
下記の条件を満たす空でない文字列 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi></mrow><annotation encoding="application/x-tex">T</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span></var> の個数を <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>998244353</mn></mrow><annotation encoding="application/x-tex">998244353</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">9</span><span class="mord">9</span><span class="mord">8</span><span class="mord">2</span><span class="mord">4</span><span class="mord">4</span><span class="mord">3</span><span class="mord">5</span><span class="mord">3</span></span></span></span></span></var> で割ったあまりを出力してください。</p>
<blockquote>
<p><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi></mrow><annotation encoding="application/x-tex">T</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span></var> を <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">2</span></span></span></span></span></var> つ連結して得られる文字列 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi><mi>T</mi></mrow><annotation encoding="application/x-tex">TT</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span></var> が、<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> に（連続とは限らない）部分列として含まれる。</p>
</blockquote>
</section>
</div>

<div class="part">
<section>
<h3>制約</h3><ul>
<li><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var> は英小文字のみからなる長さ <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span></span></span></span></span></var> 以上 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>100</mn></mrow><annotation encoding="application/x-tex">100</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span><span class="mord">0</span><span class="mord">0</span></span></span></span></span></var> 以下の文字列</li>
</ul>
</section>
</div>

<hr>
<div class="io-style">
<div class="part">
<section>
<h3>入力</h3><p>入力は以下の形式で標準入力から与えられる。</p>
<pre><var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span></var>
</pre>
</section>
</div>

<div class="part">
<section>
<h3>出力</h3><p>答えを出力せよ。</p>
</section>
</div>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 1 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">ababbaba
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 1 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">8
</textarea>
<p>問題文中の条件を満たす文字列 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi></mrow><annotation encoding="application/x-tex">T</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span></var> は、<code>a</code> 、<code>aa</code> 、<code>ab</code> 、<code>aba</code> 、<code>b</code> 、<code>ba</code> 、<code>bab</code> 、<code>bb</code> の <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>8</mn></mrow><annotation encoding="application/x-tex">8</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">8</span></span></span></span></span></var> 個です。</p>
</section>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 2 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">zzz
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 2 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">1
</textarea>
<p>問題文中の条件を満たす文字列 <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi></mrow><annotation encoding="application/x-tex">T</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span></var> は、<code>z</code> のみです。
<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi><mo>=</mo><msub><mi>S</mi><mn>1</mn></msub><msub><mi>S</mi><mn>2</mn></msub><msub><mi>S</mi><mn>3</mn></msub><mo>=</mo></mrow><annotation encoding="application/x-tex">S = S_1S_2S_3 = </annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.68333em; vertical-align: 0em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">=</span><span class="mspace" style="margin-right: 0.277778em;"></span></span><span class="base"><span class="strut" style="height: 0.83333em; vertical-align: -0.15em;"></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">1</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">2</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">3</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">=</span></span></span></span></span></var> <code>zzz</code> から、文字列 <code>zz</code> を部分列として得る方法は、
<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><msub><mi>S</mi><mn>1</mn></msub><msub><mi>S</mi><mn>2</mn></msub><mo>=</mo></mrow><annotation encoding="application/x-tex">S_1S_2 = </annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.83333em; vertical-align: -0.15em;"></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">1</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">2</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">=</span></span></span></span></span></var> <code>zz</code> 、<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><msub><mi>S</mi><mn>1</mn></msub><msub><mi>S</mi><mn>3</mn></msub><mo>=</mo></mrow><annotation encoding="application/x-tex">S_1S_3 = </annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.83333em; vertical-align: -0.15em;"></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">1</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">3</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">=</span></span></span></span></span></var> <code>zz</code> 、<var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><msub><mi>S</mi><mn>2</mn></msub><msub><mi>S</mi><mn>3</mn></msub><mo>=</mo></mrow><annotation encoding="application/x-tex">S_2S_3 = </annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.83333em; vertical-align: -0.15em;"></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">2</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mord"><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.301108em;"><span class="" style="top: -2.55em; margin-left: -0.05764em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">3</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mspace" style="margin-right: 0.277778em;"></span><span class="mrel">=</span></span></span></span></span></var> <code>zz</code> の <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">3</span></span></span></span></span></var> 通りありますが、文字列 <code>z</code> は答えに <var><span><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.64444em; vertical-align: 0em;"></span><span class="mord">1</span></span></span></span></span></var> 回だけ寄与することに注意してください。</p>
</section>
</div>

<hr>
<div class="part">
<section>
<h3>入力例 3 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">ppppqqppqqqpqpqppqpqqqqpppqppq
</textarea>
</section>
</div>

<div class="part">
<section>
<h3>出力例 3 </h3>
									<p id="copied"></p>
									<textarea onclick="this.selectionStart=0;this.selectionEnd=this.innerHTML.length;document.execCommand('copy');this.parentElement.querySelector('p').innerText='コピーしました';window.setTimeout(()=>{this.parentElement.querySelector('p').innerText = '';document.querySelectorAll((element)=>element.innerText='')},1000);"
									readonly="" data-question="question" style="font-size: 15px; line-height: 15px; height: 38px;">580
</textarea></section>
</div>
