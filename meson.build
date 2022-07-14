project('snippets',
  'cpp',
  default_options: ['c_std=gnu2x', 'cpp_std=gnu++20', 'cpp_eh=none', 'b_lto=true'])

add_project_arguments('-march=native', language: 'cpp')

gbench = dependency('benchmark')

executable('foo', 'foo.cpp', dependencies: gbench)

#subdir('spinlock')
