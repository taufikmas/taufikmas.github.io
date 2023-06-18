---
layout: post
title:  "Linux environment di windows dengan WSL"
excerpt: "Cara menggunakan environment GNU LINUX tanpa dual boot di windows"
categories:
  - blog
tags:
  - jekyll
  - comments
  - layout
---

# Tutorial install WSL

**WSL**, aka Windows Subsystem for Linux,  berdasar https://learn.microsoft.com/en-us/windows/wsl/about adalah fasilitas dari windows yang memungkinkan penggunaan command line, utility dan aplikasi linux tanpa install dual boot OS maupun virtual machine.

### 1. Download via microsoft Store
![image-center]({{ site.url }}{{ site.baseurl }}/assets/images/WSL-001.JPG){: .align-center}
.
### 2. WSL belum aktif, aktifkan dulu.
![image-center]({{ site.url }}{{ site.baseurl }}/assets/images/WSL-002.JPG){: .align-center}

aktifkan WSL via menu setting, lalu `restart`.
![image-center]({{ site.url }}{{ site.baseurl }}/assets/images/WSL-003.JPG){: .align-center}
### 3. Masukkan username dan password.
![image-center]({{ site.url }}{{ site.baseurl }}/assets/images/WSL-004.JPG){: .align-center}

![image-center]({{ site.url }}{{ site.baseurl }}/assets/images/WSL-005.JPG){: .align-center}


Lets try ruby yah <a href="https://gorails.com/setup/windows/10/"></a>.

**Install Ruby**
.

```html
{% raw %}sudo apt-get update
sudo apt-get install git-core zlib1g-dev build-essential libssl-dev libreadline-dev libyaml-dev libsqlite3-dev sqlite3 libxml2-dev libxslt1-dev libcurl4-openssl-dev software-properties-common libffi-dev{% endraw %}
```
