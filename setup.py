from distutils.core import setup
from Cython.Build import cythonize

setup(name='Dice Test',
      ext_modules=cythonize("dice_test_cy.pyx"))
