// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: fbe
// Version: 1.3.0.0

package test

import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding optional protoOrder final model
type FinalModelOptionalprotoOrder struct {
    // Final model buffer
    buffer *fbe.Buffer
    // Final model buffer offset
    offset int

    // Base final model value
    value *proto.FinalModelOrder
}

// Create a new optional protoOrder final model
func NewFinalModelOptionalprotoOrder(buffer *fbe.Buffer, offset int) *FinalModelOptionalprotoOrder {
    fbeResult := FinalModelOptionalprotoOrder{buffer: buffer, offset: offset}
    fbeResult.value = proto.NewFinalModelOrder(buffer, 0)
    return &fbeResult
}

// Get the optional final model value
func (fm *FinalModelOptionalprotoOrder) Value() *proto.FinalModelOrder { return fm.value }

// Get the allocation size
func (fm *FinalModelOptionalprotoOrder) FBEAllocationSize(fbeValue *proto.Order) int {
    if fbeValue != nil {
        return 1 + fm.value.FBEAllocationSize(fbeValue)
    } else {
        return 1
    }
}

// Get the final offset
func (fm *FinalModelOptionalprotoOrder) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelOptionalprotoOrder) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelOptionalprotoOrder) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelOptionalprotoOrder) FBEUnshift(size int) { fm.offset -= size }

// Check if the object contains a value
func (fm *FinalModelOptionalprotoOrder) HasValue() bool {
    if (fm.buffer.Offset() + fm.FBEOffset() + 1) > fm.buffer.Size() {
        return false
    }

    fbeHasValue := fbe.ReadUInt8(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset())
    return fbeHasValue != 0
}

// Check if the optional value is valid
func (fm *FinalModelOptionalprotoOrder) Verify() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + 1) > fm.buffer.Size() {
        return fbe.MaxInt
    }

    fbeHasValue := fbe.ReadUInt8(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset())
    if fbeHasValue == 0 {
        return 1
    }

    fm.buffer.Shift(fm.FBEOffset() + 1)
    fbeResult := fm.value.Verify()
    fm.buffer.Unshift(fm.FBEOffset() + 1)
    return 1 + fbeResult
}

// Get the optional value
func (fm *FinalModelOptionalprotoOrder) Get() (*proto.Order, int, error) {
    var fbeValue *proto.Order = nil

    if (fm.buffer.Offset() + fm.FBEOffset() + 1) > fm.buffer.Size() {
        return fbeValue, 0, errors.New("model is broken")
    }

    if !fm.HasValue() {
        return fbeValue, 1, nil
    }

    var fbeResult int
    var err error

    fbeValue = proto.NewOrder()

    fm.buffer.Shift(fm.FBEOffset() + 1)
    fbeResult, err = fm.value.GetValue(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset() + 1)
    return fbeValue, 1 + fbeResult, err
}

// Set the optional value
func (fm *FinalModelOptionalprotoOrder) Set(fbeValue *proto.Order) (int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + 1) > fm.buffer.Size() {
        return 0, errors.New("model is broken")
    }

    fbeHasValue := uint8(0)
    if fbeValue != nil {
        fbeHasValue = uint8(1)
    }
    fbe.WriteUInt8(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), fbeHasValue)
    if fbeHasValue == 0 {
        return 1, nil
    }

    fm.buffer.Shift(fm.FBEOffset() + 1)
    fbeResult, err := fm.value.Set(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset() + 1)
    return 1 + fbeResult, err
}
