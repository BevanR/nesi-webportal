<?php
/**
 * @file
 * nesi_blog.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nesi_blog_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Engineering',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => '1c2f201d-0c4e-426a-88ee-3644bee4b0e4',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Maths',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => '42a92778-6b64-48f7-a0fa-79b3b16a90e8',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Astronomy',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => '44fa6ce8-b4a4-4a9e-917b-d7761185426c',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Video conference',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => '94ff35cb-c791-4026-be37-e642e0f19425',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Keynote',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => 'a244faf1-8471-4102-9784-16c90226676b',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'High Performance Computing',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => 'a4dcf7dc-0b49-45ee-a935-ec2fe0475969',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Workshop',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => 'a7bc7e99-f182-4308-ac6a-661f46f9ebf3',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Physics',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => 'c03a442c-bb6e-4678-8b15-e0ebdd1a4cc2',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Science',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => 'c0d138c3-2e4f-45e8-a00a-cb9d8515c173',
    'vocabulary_machine_name' => 'blog_topics',
  );
  $terms[] = array(
    'name' => 'Bioengineering',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => 'db263cdc-bd56-4726-8c9f-bb1941b5ec29',
    'vocabulary_machine_name' => 'blog_topics',
  );
  return $terms;
}
