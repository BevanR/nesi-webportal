<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?> role="main">


  <header>
  
    <div class="title-wrapper">
      
      <?php print render($title_prefix); ?>
        <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
      <?php print render($title_suffix); ?>
      
      <h2><?php print render($content['field_subtitle']); ?></h2>
      
    </div>
    
    <div class="share-wrapper">
      <?php print render($content['links']); ?>
      <div class="comment-count-wrapper"><span><?php print $node->comment_count; ?></span></div>
    </div>

    <?php if ($display_submitted): ?>
      
      <div class="submitted-info-wrapper">
        
        <?php
        
          // get author first and last name
          $author = user_load_by_name($node->name);
          $author_name = format_username($author);
          
          // get author city
          $r_profile = profile2_load_by_user($author->uid); 
          $field_user_city_key = $r_profile['researcher_profile']->field_user_city[LANGUAGE_NONE][0]['value'];
          $field_user_city_object = field_info_field('field_user_city');
          $author_city = $field_user_city_object['settings']['allowed_values'][$field_user_city_key];
          
        ?>
        
        <div class="author-picture"><?php print theme('image_style', array('style_name' => 'blog-author-thumbnail', 'path' => $author->picture->uri)); ?></div>
        
        <div class="sub-info-wrapper">
          
          <p class="author-info"><span class="name"><?php print $author_name; ?></span> - <span class="city"><?php print $author_city; ?></span></p>
    
          <time class="date-created"><?php print format_date($node->created, 'extra_long_without_time', ''); ?></time>
          
          <div class="custom-tags"><?php print render($content['field_custom_tags']); ?></div>
        
        </div>
        
      </div>

    <?php endif; ?>
    
  </header>

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_custom_tags']);
    hide($content['field_image']);
    hide($content['field_subtitle']);
  ?>
  
  <div class="image-wrapper">
    <?php print render($content['field_image']); ?>
    <span class="image-title"><?php print $node->field_image['und'][0]['title']; ?></span>
  </div>

  <div class="body-wrapper">
    <?php print render($content); ?>
  </div>
  
  <div class="comments-wrapper">
    <?php print render($content['comments']); ?>
  </div>


</article> <!-- /.node -->
