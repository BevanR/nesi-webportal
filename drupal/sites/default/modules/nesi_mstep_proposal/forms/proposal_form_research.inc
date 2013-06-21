<?php

function nesi_mstep_proposal_research_form($form_state) {

  $form = array();
  $form['prc-form-title'] = array(
    '#markup' => '<h1>Part 1 of 3 - Project and Team details</h1>',
  );

  $form_structure = nesi_mstep_form_structure('proposal_research_class');
  $form = nesi_mstep_form_elements($form_structure, $form , $form_state);

  unset($form['group-usage']);
  unset($form['group-software']);
  unset($form['group-additional']);

  return $form;
}



function nesi_mstep_proposal_research_form_part_2($form_state) {

  $form = array();
  $form['prc-form-title'] = array(
    '#markup' => '<h1>Part 2 of 3 - Technical details</h1>',
  );

  $form_structure = nesi_mstep_form_structure('proposal_research_class');
  $form = nesi_mstep_form_elements($form_structure , $form_state);

  unset($form['group-project']);
  unset($form['group-peer-reviewed']);
  unset($form['group-budget']);
  unset($form['group-team']);
  unset($form['group-additional']);

  return $form;
}

function nesi_mstep_proposal_research_form_part_3() {

  $form = array();
  $form['prc-form-title'] = array(
    '#markup' => '<h1>Part 3 of 3 - Support and additional information</h1>',
  );

  $form_structure = nesi_mstep_form_structure('proposal_research_class');
  $form = nesi_mstep_form_elements($form_structure);

  unset($form['group-project']);
  unset($form['group-peer-reviewed']);
  unset($form['group-budget']);
  unset($form['group-team']);
  unset($form['group-usage']);
  unset($form['group-software']);
 
  return $form;
}
