// Copyright 2016 Yahoo Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#include <vespa/fastos/fastos.h>
#include <vespa/log/log.h>
LOG_SETUP(".searchcorespi.index.indexmaintainerconfig");

#include "indexmaintainerconfig.h"

using search::index::Schema;
using search::TuneFileAttributes;

namespace searchcorespi {
namespace index {

IndexMaintainerConfig::IndexMaintainerConfig(const vespalib::string &baseDir,
                                             WarmupConfig warmup,
                                             size_t maxFlushed,
                                             const Schema &schema,
                                             const Schema &fusionSchema,
                                             const TuneFileAttributes &tuneFileAttributes)
    : _baseDir(baseDir),
      _warmup(warmup),
      _maxFlushed(maxFlushed),
      _schema(schema),
      _fusionSchema(fusionSchema),
      _tuneFileAttributes(tuneFileAttributes)
{
}

} // namespace index
} // namespace searchcorespi

