/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: d:\github\compiletest\34\ardupilot\modules\uavcan\dsdl\uavcan\equipment\air_data\1029.StaticTemperature.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_AIR_DATA_STATICTEMPERATURE_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_AIR_DATA_STATICTEMPERATURE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Static temperature.
#

float16 static_temperature              # Kelvin
float16 static_temperature_variance     # Kelvin^2
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.air_data.StaticTemperature
saturated float16 static_temperature
saturated float16 static_temperature_variance
******************************************************************************/

#undef static_temperature
#undef static_temperature_variance

namespace uavcan
{
namespace equipment
{
namespace air_data
{

template <int _tmpl>
struct UAVCAN_EXPORT StaticTemperature_
{
    typedef const StaticTemperature_<_tmpl>& ParameterType;
    typedef StaticTemperature_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > static_temperature;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > static_temperature_variance;
    };

    enum
    {
        MinBitLen
            = FieldTypes::static_temperature::MinBitLen
            + FieldTypes::static_temperature_variance::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::static_temperature::MaxBitLen
            + FieldTypes::static_temperature_variance::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::static_temperature >::Type static_temperature;
    typename ::uavcan::StorageType< typename FieldTypes::static_temperature_variance >::Type static_temperature_variance;

    StaticTemperature_()
        : static_temperature()
        , static_temperature_variance()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<32 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 1029 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.air_data.StaticTemperature";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool StaticTemperature_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        static_temperature == rhs.static_temperature &&
        static_temperature_variance == rhs.static_temperature_variance;
}

template <int _tmpl>
bool StaticTemperature_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(static_temperature, rhs.static_temperature) &&
        ::uavcan::areClose(static_temperature_variance, rhs.static_temperature_variance);
}

template <int _tmpl>
int StaticTemperature_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::static_temperature::encode(self.static_temperature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::static_temperature_variance::encode(self.static_temperature_variance, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int StaticTemperature_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::static_temperature::decode(self.static_temperature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::static_temperature_variance::decode(self.static_temperature_variance, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature StaticTemperature_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x49272A6477D96271ULL);

    FieldTypes::static_temperature::extendDataTypeSignature(signature);
    FieldTypes::static_temperature_variance::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef StaticTemperature_<0> StaticTemperature;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::air_data::StaticTemperature > _uavcan_gdtr_registrator_StaticTemperature;

}

} // Namespace air_data
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::air_data::StaticTemperature >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::air_data::StaticTemperature::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::air_data::StaticTemperature >::stream(Stream& s, ::uavcan::equipment::air_data::StaticTemperature::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "static_temperature: ";
    YamlStreamer< ::uavcan::equipment::air_data::StaticTemperature::FieldTypes::static_temperature >::stream(s, obj.static_temperature, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "static_temperature_variance: ";
    YamlStreamer< ::uavcan::equipment::air_data::StaticTemperature::FieldTypes::static_temperature_variance >::stream(s, obj.static_temperature_variance, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace air_data
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::air_data::StaticTemperature::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::air_data::StaticTemperature >::stream(s, obj, 0);
    return s;
}

} // Namespace air_data
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_AIR_DATA_STATICTEMPERATURE_HPP_INCLUDED