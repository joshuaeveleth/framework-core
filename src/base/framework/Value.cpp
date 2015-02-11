/*
 * This file is protected by Copyright. Please refer to the COPYRIGHT file
 * distributed with this source distribution.
 *
 * This file is part of REDHAWK core.
 *
 * REDHAWK core is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * REDHAWK core is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */

#include <ossie/Value.h>
#include <ossie/prop_helpers.h>

using namespace redhawk;

Value::Value() :
    CORBA::Any()
{
}

Value::Value(const CORBA::Any& any) :
    CORBA::Any(any)
{
}

Value::Value(const Value& any) :
    CORBA::Any(any)
{
}

Value& Value::operator=(const CORBA::Any& any)
{
    CORBA::Any::operator=(any);
    return *this;
}

Value& Value::operator=(const Value& any)
{
    return operator=(static_cast<const CORBA::Any&>(any));
}

std::string Value::toString() const
{
    return ossie::any_to_string(*this);
}

bool Value::toBoolean() const
{
    return ossie::any::toBoolean(*this);
}

float Value::toFloat() const
{
    return ossie::any::toFloat(*this);
}

double Value::toDouble() const
{
    return ossie::any::toDouble(*this);
}

CORBA::Octet Value::toOctet() const
{
    return ossie::any::toOctet(*this);
}

CORBA::Short Value::toShort() const
{
    return ossie::any::toShort(*this);
}

CORBA::UShort Value::toUShort() const
{
    return ossie::any::toUShort(*this);
}

CORBA::Long Value::toLong() const
{
    return ossie::any::toLong(*this);
}

CORBA::ULong Value::toULong() const
{
    return ossie::any::toULong(*this);
}

CORBA::LongLong Value::toLongLong() const
{
    return ossie::any::toLongLong(*this);
}

CORBA::ULongLong Value::toULongLong() const
{
    return ossie::any::toULongLong(*this);
}

PropertyMap& Value::toStruct() const
{
    CF::Properties* props;
    *this >>= props;
    return reinterpret_cast<PropertyMap&>(*props);
}

std::vector<PropertyMap*> Value::toStructSeq() const
{
    CORBA::AnySeq* prop_seq;
    *this >>= prop_seq;
    std::vector<PropertyMap*> retval;
    CF::Properties* props;
    for (CORBA::ULong ii=0; ii<prop_seq->length(); ii++) {
        (*prop_seq)[ii] >>= props;
        retval.push_back(reinterpret_cast<PropertyMap*>(props));
    }
    return retval;
}