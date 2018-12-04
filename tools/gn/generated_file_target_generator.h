// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef TOOLS_GN_GENERATED_FILE_TARGET_GENERATOR_H_
#define TOOLS_GN_GENERATED_FILE_TARGET_GENERATOR_H_

#include "base/macros.h"
#include "tools/gn/target.h"
#include "tools/gn/target_generator.h"

// Collects and writes specified data.
class GeneratedFileTargetGenerator : public TargetGenerator {
 public:
  GeneratedFileTargetGenerator(Target* target,
                               Scope* scope,
                               const FunctionCallNode* function_call,
                               Target::OutputType type,
                               Err* err);
  ~GeneratedFileTargetGenerator() override;

 protected:
  void DoRun() override;

 private:
  bool FillGeneratedFileOutput();
  bool FillOutputConversion();
  bool FillContents();

  Target::OutputType output_type_;

  DISALLOW_COPY_AND_ASSIGN(GeneratedFileTargetGenerator);
};

#endif  // TOOLS_GN_GENERATED_FILE_TARGET_GENERATOR_H_