#pragma once

#include "../../trienode.h"

// We save all TrieNode's fields except the last one, which is a pointer to array,
// as we're store that array just after the node
#define PICKLE_TRIENODE_SIZE (sizeof(TrieNode) - sizeof(TrieNode**))
#define PICKLE_POINTER_SIZE (sizeof(TrieNode*))
#define PICKLE_CHUNK_COUNTER_SIZE (sizeof(Py_ssize_t))
