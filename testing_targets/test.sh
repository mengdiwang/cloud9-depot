rm -rf test-prod-cons
../cloud9/Release+Asserts+Checks/bin/klee --disable-opt --use-cek-search=line.txt --output-dir=test-prod-cons --debug-print-instructions prod-cons.bc
dot -Tpng funcs.dot > funcs.png
dot -Tpng blocks.dot > blocks.png
cat ce-block-dump.out
