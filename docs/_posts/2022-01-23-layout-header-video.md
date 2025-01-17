---
title: "Video"
header:
  video:
    id: 7skwMsXw2lo 
    provider: youtube
categories:
  - Layout
  - Uncategorized
tags:
  - video
  - layout
---

This post should display a **header with a responsive video**, if the theme supports it.

## Settings

| Parameter  | Required     | Description |
|----------  |---------     | ----------- |
| `id`       | **Required** | ID of the video |
| `provider` | **Required** | Hosting provider of the video, either `youtube` or `vimeo` |

### YouTube

To embed the following YouTube video at url `https://www.youtube.com/watch?v=7skwMsXw2lo` (long version) or `https://youtu.be/7skwMsXw2lo` (short version) into a post or page's main content you'd use: 

```liquid
{% raw %}{% include video id="7skwMsXw2lo" provider="youtube" %}{% endraw %}
```

{% include video id="7skwMsXw2lo" provider="youtube" %}
  

To embed it as a video header you'd use the following YAML Front Matter

```yaml
header:
  video:
    id: 7skwMsXw2lo
    provider: youtube
```

### Vimeo

To embed the following Vimeo video at url `https://vimeo.com/212731897` into a post or page's main content you'd use: 

```liquid
{% raw %}{% include video id="212731897" provider="vimeo" %}{% endraw %}
```

{% include video id="212731897" provider="vimeo" %}

To embed it as a video header you'd use the following YAML Front Matter

```yaml
header:
  video:
    id: 212731897
    provider: vimeo
```