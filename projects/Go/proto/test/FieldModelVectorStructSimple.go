// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: fbe
// Version: 1.3.0.0

package test

import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding StructSimple vector field model
type FieldModelVectorStructSimple struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int

    // Vector item field model
    model *FieldModelStructSimple
}

// Create a new StructSimple vector field model
func NewFieldModelVectorStructSimple(buffer *fbe.Buffer, offset int) *FieldModelVectorStructSimple {
    fbeResult := FieldModelVectorStructSimple{buffer: buffer, offset: offset}
    fbeResult.model = NewFieldModelStructSimple(buffer, offset)
    return &fbeResult
}

// Get the field size
func (fm *FieldModelVectorStructSimple) FBESize() int { return 4 }

// Get the field extra size
func (fm *FieldModelVectorStructSimple) FBEExtra() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeVectorOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeVectorOffset == 0) || ((fm.buffer.Offset() + fbeVectorOffset + 4) > fm.buffer.Size()) {
        return 0
    }

    fbeVectorSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeVectorOffset))

    fbeResult := 0
    fm.model.SetFBEOffset(fbeVectorOffset + 4)
    for i := fbeVectorSize; i > 0; i-- {
        fbeResult += fm.model.FBESize() + fm.model.FBEExtra()
        fm.model.FBEShift(fm.model.FBESize())
    }
    return fbeResult
}

// Get the field offset
func (fm *FieldModelVectorStructSimple) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelVectorStructSimple) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelVectorStructSimple) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelVectorStructSimple) FBEUnshift(size int) { fm.offset -= size }

// Get the vector offset
func (fm *FieldModelVectorStructSimple) Offset() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeVectorOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    return fbeVectorOffset
}

// Get the vector size
func (fm *FieldModelVectorStructSimple) Size() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeVectorOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeVectorOffset == 0) || ((fm.buffer.Offset() + fbeVectorOffset + 4) > fm.buffer.Size()) {
        return 0
    }

    fbeVectorSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeVectorOffset))
    return fbeVectorSize
}

// Vector index operator
func (fm *FieldModelVectorStructSimple) GetItem(index int) (*FieldModelStructSimple, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return nil, errors.New("model is broken")
    }

    fbeVectorOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeVectorOffset == 0) || ((fm.buffer.Offset() + fbeVectorOffset + 4) > fm.buffer.Size()) {
        return nil, errors.New("model is broken")
    }

    fbeVectorSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeVectorOffset))
    if index >= fbeVectorSize {
        return nil, errors.New("index is out of bounds")
    }

    fm.model.SetFBEOffset(fbeVectorOffset + 4)
    fm.model.FBEShift(index * fm.model.FBESize())
    return fm.model, nil
}

// Resize the vector and get its first model
func (fm *FieldModelVectorStructSimple) Resize(size int) (*FieldModelStructSimple, error) {
    fbeVectorSize := size * fm.model.FBESize()
    fbeVectorOffset := fm.buffer.Allocate(4 + fbeVectorSize) - fm.buffer.Offset()
    if (fbeVectorOffset == 0) || ((fm.buffer.Offset() + fbeVectorOffset + 4) > fm.buffer.Size()) {
        return nil, errors.New("model is broken")
    }

    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), uint32(fbeVectorOffset))
    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeVectorOffset, uint32(size))
    fbe.WriteCount(fm.buffer.Data(), fm.buffer.Offset() + fbeVectorOffset + 4, 0, fbeVectorSize)

    fm.model.SetFBEOffset(fbeVectorOffset + 4)
    return fm.model, nil
}

// Check if the vector is valid
func (fm *FieldModelVectorStructSimple) Verify() bool {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return true
    }

    fbeVectorOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if fbeVectorOffset == 0 {
        return true
    }

    if (fm.buffer.Offset() + fbeVectorOffset + 4) > fm.buffer.Size() {
        return false
    }

    fbeVectorSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeVectorOffset))

    fm.model.SetFBEOffset(fbeVectorOffset + 4)
    for i := fbeVectorSize; i > 0; i-- {
        if !fm.model.Verify() {
            return false
        }
        fm.model.FBEShift(fm.model.FBESize())
    }

    return true
}

// Get the vector
func (fm *FieldModelVectorStructSimple) Get() ([]StructSimple, error) {
    values := make([]StructSimple, 0)

    fbeVectorSize := fm.Size()
    if fbeVectorSize == 0 {
        return values, nil
    }

    values = make([]StructSimple, 0, fbeVectorSize)

    fbeModel, err := fm.GetItem(0)
    if err != nil {
        return values, err
    }

    for i := fbeVectorSize; i > 0; i-- {
        value, err := fbeModel.Get()
        if err != nil {
            return values, err
        }
        values = append(values, *value)
        fbeModel.FBEShift(fbeModel.FBESize())
    }

    return values, nil
}

// Set the vector
func (fm *FieldModelVectorStructSimple) Set(values []StructSimple) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return errors.New("model is broken")
    }

    fbeModel, err := fm.Resize(len(values))
    if err != nil {
        return err
    }

    for _, value := range values {
        err := fbeModel.Set(&value)
        if err != nil {
            return err
        }
        fbeModel.FBEShift(fbeModel.FBESize())
    }

    return nil
}