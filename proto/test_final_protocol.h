// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

#pragma once

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe_protocol.h"

#include "test_final_models.h"

#include "proto_final_protocol.h"

namespace FBE {

namespace test {

// Fast Binary Encoding test protocol version
struct ProtocolVersion
{
    // Protocol major version
    static const int major = 123;
    // Protocol minor version
    static const int minor = 456;
};

// Fast Binary Encoding test final sender
class FinalSender : public virtual FBE::Sender
    , public virtual proto::FinalSender
{
public:
    FinalSender()
    { this->final(true); }
    FinalSender(const FinalSender&) = default;
    FinalSender(FinalSender&&) noexcept = default;
    virtual ~FinalSender() = default;

    FinalSender& operator=(const FinalSender&) = default;
    FinalSender& operator=(FinalSender&&) noexcept = default;

    // Imported senders
    proto::FinalSender& proto_sender() noexcept { return *this; }

public:
    // Sender models accessors
};

// Fast Binary Encoding test final receiver
class FinalReceiver : public virtual FBE::Receiver
    , public virtual proto::FinalReceiver
{
public:
    FinalReceiver() { this->final(true); }
    FinalReceiver(const FinalReceiver&) = default;
    FinalReceiver(FinalReceiver&&) = default;
    virtual ~FinalReceiver() = default;

    FinalReceiver& operator=(const FinalReceiver&) = default;
    FinalReceiver& operator=(FinalReceiver&&) = default;

protected:
    // Receive handlers

    // Receive message handler
    bool onReceive(size_t type, const void* data, size_t size) override;

private:
    // Receiver values accessors

    // Receiver models accessors
};

// Fast Binary Encoding test final client
class FinalClient : public virtual FinalSender, protected virtual FinalReceiver
    , public virtual proto::FinalClient
{
public:
    typedef proto::FinalClient protoFinalClient;

    FinalClient() = default;
    FinalClient(const FinalClient&) = default;
    FinalClient(FinalClient&&) = default;
    virtual ~FinalClient() = default;

    FinalClient& operator=(const FinalClient&) = default;
    FinalClient& operator=(FinalClient&&) = default;

    // Imported clients
    proto::FinalClient& proto_client() noexcept { return *this; }

    // Reset client buffers
    void reset() { std::scoped_lock locker(this->_lock); reset_requests(); }

    // Watchdog for timeouts
    void watchdog(uint64_t utc) { std::scoped_lock locker(this->_lock); watchdog_requests(utc); }

protected:
    // Reset client requests
    virtual void reset_requests();

    // Watchdog client requests for timeouts
    virtual void watchdog_requests(uint64_t utc);
};

} // namespace test

} // namespace FBE
