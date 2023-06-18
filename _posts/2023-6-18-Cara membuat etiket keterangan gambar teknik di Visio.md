---
title:  "Cara membuat etiket keterangan gambar teknik di Visio"
excerpt: "Cara membuat Etiket / tuklis / keterangan untuk gambar teknik di microsoft visio"
author_profile: false
categories:
  - blog
tags:
  - jekyll
  - comments
  - layout
---

# Tutorial menggunakan git di vscode

**Microsoft visio**, merupakan editor flowchart, skema program yang dkeluarkan oleh microsoft. Untuk keperluan dokumen wiring system misalnya diperlukan etiket/stuklis untuk menunjukan keterangan desain. 

<!--<figure class="half">
   <a href="/assets/images/etiket-gambar-teknik.jpg"><img src="/assets/images/etiket-gambar-teknik.jpg"></a>
    <figcaption>Contoh dimensi etiket gambar teknik dalam satuan mm.</figcaption>
</figure>-->

![image-center]({{ site.url }}{{ site.baseurl }}/assets/images/etiket-gambar-teknik.jpg){: .align-center}

The preferred way of using images is placing them in the `/assets/images/` directory and referencing them with an absolute path. Prepending the filename with `{% raw %}{{ site.url }}{{ site.baseurl }}/assets/images/{% endraw %}` will make sure your images display properly in feeds and such.

Standard image with no width modifier classes applied.

**HTML:**

```html
{% raw %}<img src="{{ site.url }}{{ site.baseurl }}/assets/images/etiket-gambar-teknik.jpg" alt="">{% endraw %}
```

**or Kramdown:**

```markdown
{% raw %}![alt]({{ site.url }}{{ site.baseurl }}/assets/images/etiket-gambar-teknik.jpg){% endraw %}
```

![Unsplash image 9]({{ site.url }}{{ site.baseurl }}/assets/images/etiket-gambar-teknik.jpg)

Image that fills page content container by adding the `.full` class with:

**HTML:**

```html
{% raw %}<img src="{{ site.url }}{{ site.baseurl }}/assets/images/etiket-gambar-teknik.jpg" alt="" class="full">{% endraw %}
```

**or Kramdown:**

```markdown
{% raw %}![alt]({{ site.url }}{{ site.baseurl }}/assets/images/filename.jpg)
{: .full}{% endraw %}
```

![Unsplash image 10]({{ site.url }}{{ site.baseurl }}/assets/images/unsplash-image-10.jpg)
{: .full}

Cara membuat etiket sebagai berikut,
* 1. create rectangle sesuai dimensi 
* 2. tuliskan note 
* 3. sesuaikan dimensi kertas yang digunakan


*finish*