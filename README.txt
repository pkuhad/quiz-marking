Quiz Marking
============

Drupal quiz project is awesome. While using it I confronted an interesting problem : How to perform marks calculations for a quiz based exam. I also needed a simple admin page in administer panel where it is possible to check out current rankings and marks.

So quiz_marking module is the answer to all those questions. It adds an extra field set to multi choice and true/false questions' node to add marks. It provides a 'quiz results' link in quiz's administer panel.

It's functionality is dependent on quiz database. It checks all Quiz IDs, all result IDs within that quiz, all questions within that results, answers (skipped, right or wrong) within that question. It caches ones calculated result so no need to perform these heavy operations again and again. If you want to update your results it provides an update link.



		



