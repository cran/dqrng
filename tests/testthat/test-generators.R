context("generators")

seed <- 1234567890

test_that("Default generator: setting seed produces identical uniformly distributed numbers", {
  dqRNGkind("default")
  dqset.seed(seed)
  u1 <- dqrunif(10)
  dqset.seed(seed)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Default generator: setting seed and stream produces identical uniformly distributed numbers", {
  dqRNGkind("default")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 1)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Default generator: saving state produces identical uniformly distributed numbers", {
  dqRNGkind("default")
  dqset.seed(seed, 1)
  state <- dqrng_get_state()
  u1 <- dqrunif(10)
  dqrng_set_state(state)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Default generator: setting same seed but different stream produces different uniformly distributed numbers", {
  dqRNGkind("default")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 2)
  u2 <- dqrunif(10)
  expect_false(identical(u1, u2))
})

test_that("PCG64: setting seed produces identical uniformly distributed numbers", {
  skip_if(powerpc_apple)
  dqRNGkind("pcg64")
  dqset.seed(seed)
  u1 <- dqrunif(10)
  dqset.seed(seed)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("PCG64: setting seed and stream produces identical uniformly distributed numbers", {
  skip_if(powerpc_apple)
  dqRNGkind("pcg64")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 1)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("PCG64: saving state produces identical uniformly distributed numbers", {
  skip_if(powerpc_apple)
  dqRNGkind("pcg64")
  dqset.seed(seed, 1)
  state <- dqrng_get_state()
  u1 <- dqrunif(10)
  dqrng_set_state(state)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("PCG64: setting same seed but different stream produces different uniformly distributed numbers", {
  skip_if(powerpc_apple)
  dqRNGkind("pcg64")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 2)
  u2 <- dqrunif(10)
  expect_false(identical(u1, u2))
})

test_that("Xoroshiro128+: setting seed produces identical uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128+")
  dqset.seed(seed)
  u1 <- dqrunif(10)
  dqset.seed(seed)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoroshiro128+: setting seed and stream produces identical uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128+")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 1)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoroshiro128+: saving state produces identical uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128+")
  dqset.seed(seed, 1)
  state <- dqrng_get_state()
  u1 <- dqrunif(10)
  dqrng_set_state(state)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoroshiro128+: setting same seed but different stream produces different uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128+")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 2)
  u2 <- dqrunif(10)
  expect_false(identical(u1, u2))
})

test_that("Xoroshiro128++: setting seed produces identical uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128++")
  dqset.seed(seed)
  u1 <- dqrunif(10)
  dqset.seed(seed)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoroshiro128++: setting seed and stream produces identical uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128++")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 1)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoroshiro128++: saving state produces identical uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128++")
  dqset.seed(seed, 1)
  state <- dqrng_get_state()
  u1 <- dqrunif(10)
  dqrng_set_state(state)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoroshiro128++: setting same seed but different stream produces different uniformly distributed numbers", {
  dqRNGkind("Xoroshiro128++")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 2)
  u2 <- dqrunif(10)
  expect_false(identical(u1, u2))
})

test_that("Xoshiro256+: setting seed produces identical uniformly distributed numbers", {
  dqRNGkind("Xoshiro256+")
  dqset.seed(seed)
  u1 <- dqrunif(10)
  dqset.seed(seed)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoshiro256+: setting seed and stream produces identical uniformly distributed numbers", {
  dqRNGkind("Xoshiro256+")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 1)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoshiro256+: saving state produces identical uniformly distributed numbers", {
  dqRNGkind("Xoshiro256+")
  dqset.seed(seed, 1)
  state <- dqrng_get_state()
  u1 <- dqrunif(10)
  dqrng_set_state(state)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoshiro256+: setting same seed but different stream produces different uniformly distributed numbers", {
  dqRNGkind("Xoshiro256+")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 2)
  u2 <- dqrunif(10)
  expect_false(identical(u1, u2))
})

test_that("Xoshiro256++: setting seed produces identical uniformly distributed numbers", {
  dqRNGkind("Xoshiro256++")
  dqset.seed(seed)
  u1 <- dqrunif(10)
  dqset.seed(seed)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoshiro256++: setting seed and stream produces identical uniformly distributed numbers", {
  dqRNGkind("Xoshiro256++")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 1)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoshiro256++: saving state produces identical uniformly distributed numbers", {
  dqRNGkind("Xoshiro256++")
  dqset.seed(seed, 1)
  state <- dqrng_get_state()
  u1 <- dqrunif(10)
  dqrng_set_state(state)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Xoshiro256++: setting same seed but different stream produces different uniformly distributed numbers", {
  dqRNGkind("Xoshiro256++")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 2)
  u2 <- dqrunif(10)
  expect_false(identical(u1, u2))
})

test_that("Threefry: setting seed produces identical uniformly distributed numbers", {
  dqRNGkind("Threefry")
  dqset.seed(seed)
  u1 <- dqrunif(10)
  dqset.seed(seed)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Threefry: setting seed and stream produces identical uniformly distributed numbers", {
  dqRNGkind("Threefry")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 1)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Threefry: saving state produces identical uniformly distributed numbers", {
  dqRNGkind("Threefry")
  dqset.seed(seed, 1)
  state <- dqrng_get_state()
  u1 <- dqrunif(10)
  dqrng_set_state(state)
  u2 <- dqrunif(10)
  expect_equal(u1, u2)
})

test_that("Threefry: setting same seed but different stream produces different uniformly distributed numbers", {
  dqRNGkind("Threefry")
  dqset.seed(seed, 1)
  u1 <- dqrunif(10)
  dqset.seed(seed, 2)
  u2 <- dqrunif(10)
  expect_false(identical(u1, u2))
})

test_that("non-existant RNG produces error", {
  expect_error(dqRNGkind("does_not_exist"))
})
