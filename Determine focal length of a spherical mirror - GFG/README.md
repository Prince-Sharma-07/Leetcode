# Determine focal length of a spherical mirror
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Find the focal length of the spherical mirror with the given radius-of-curvature <strong>R</strong>.</span><br>
<em>NOTE</em></p>

<p><span style="font-size:18px">The focal length of the 'convex' mirror <strong>floor(-R/2)</strong> and that of the 'concave' mirror is <strong>floor(R/2)</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>type = "concave", R = 5.4
<strong>Output: </strong>2</span>
<strong><span style="font-size:18px">Explanation: </span></strong><span style="font-size:18px">Focal length of concave mirror = floor(R/2) = floor(5.4/2) = floor(2.7) = 2.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>type = "convex", R = 10
<strong>Output: </strong>-5</span>
</pre>

<pre><strong><span style="font-size:18px">Explanation: </span></strong><span style="font-size:18px">Focal length of convex mirror = floor(-R/2) = floor(-10/2) = floor(-5) = -5.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>findFocalLength()</strong>&nbsp;which takes R and type as input parameters and returns the floor value of focal length.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(1)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(1)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= R &lt;= 100</span></p>
</div>