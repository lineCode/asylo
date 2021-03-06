/*
 *
 * Copyright 2017 Asylo authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef ASYLO_GRPC_AUTH_CORE_ENCLAVE_CREDENTIALS_H_
#define ASYLO_GRPC_AUTH_CORE_ENCLAVE_CREDENTIALS_H_

#include "asylo/grpc/auth/core/enclave_credentials_options.h"
#include "src/core/lib/security/credentials/credentials.h"

#define GRPC_CREDENTIALS_TYPE_ENCLAVE "Enclave"

/* -- Enclave credentials. -- */

/* Creates an enclave channel credentials object using the provided options.
 * The caller takes ownership of the resulting credentials object and is
 * responsible for destroying it. The caller can wrap the credentials object
 * in a ::grpc::SecureChannelCredentials object that handles its destruction. */
grpc_channel_credentials *grpc_enclave_channel_credentials_create(
    const grpc_enclave_credentials_options *options);

/* Creates an enclave server credentials object using the provided options.
 * The caller takes ownership of the resulting credentials object and is
 * responsible for destroying it. The caller can wrap the credentials object
 * in a ::grpc::SecureServerCredentials object that handles its destruction. */
grpc_server_credentials *grpc_enclave_server_credentials_create(
    const grpc_enclave_credentials_options *options);

#endif  // ASYLO_GRPC_AUTH_CORE_ENCLAVE_CREDENTIALS_H_
