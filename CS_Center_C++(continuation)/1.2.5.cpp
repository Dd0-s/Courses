Base const* D1BaseToD2Base(Base const* base)
{
    const D1* D1_ptr = static_cast<D1 const*>(base);
    const D3* D3_ptr = static_cast<D3 const*>(D1_ptr);
    const D2* D2_ptr = static_cast<D2 const*>(D3_ptr);
    const Base* base_new = static_cast<Base const*>(D2_ptr);
    return base_new;
}
