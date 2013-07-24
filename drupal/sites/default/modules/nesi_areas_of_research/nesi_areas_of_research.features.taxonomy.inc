<?php
/**
 * @file
 * nesi_areas_of_research.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nesi_areas_of_research_taxonomy_default_vocabularies() {
  return array(
    'areas_of_research' => array(
      'name' => 'Areas of Research',
      'machine_name' => 'areas_of_research',
      'description' => 'Areas of Research',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
