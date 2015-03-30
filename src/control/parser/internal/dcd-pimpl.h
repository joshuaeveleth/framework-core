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
// Not copyrighted - public domain.
//
// This sample parser implementation was generated by CodeSynthesis XSD,
// an XML Schema to C++ data binding compiler. You may use it in your
// programs without any restrictions.
//

#ifndef CXX___XML_XSD_DCD_PIMPL_H
#define CXX___XML_XSD_DCD_PIMPL_H

#include "dcd-pskel.h"

namespace dcd
{
  class deviceconfiguration_pimpl: public deviceconfiguration_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    description (const ::std::string&);

    virtual void
    devicemanagersoftpkg (const ::std::string&);

    virtual void
    componentfiles (const ::std::vector<ossie::ComponentFile>&);

    virtual void
    partitioning (const ::std::vector<ossie::ComponentPlacement>&);

    virtual void
    domainmanager (const ::std::string&);

    virtual void
    connections (const ::std::vector<ossie::Connection>&);

    virtual void
    filesystemnames ();

    virtual void
    id (const ::std::string&);

    virtual void
    name (const ::std::string&);

    virtual ::std::auto_ptr<ossie::DeviceManagerConfiguration::DCD>
    post_deviceconfiguration ();

    private:
    std::auto_ptr<ossie::DeviceManagerConfiguration::DCD> _dcd;
  };

  class devicemanagersoftpkg_pimpl: public virtual devicemanagersoftpkg_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    localfile (const ::std::string&);

    virtual ::std::string
    post_devicemanagersoftpkg ();

    private:
    std::string _localfile;
  };

  class componentfiles_pimpl: public virtual componentfiles_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    componentfile (const ::ossie::ComponentFile&);

    virtual ::std::vector<ossie::ComponentFile>
    post_componentfiles ();

    private:
    std::vector<ossie::ComponentFile> componentFiles;
  };

  class componentfile_pimpl: public virtual componentfile_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    localfile (const ::std::string&);

    virtual void
    id (const ::std::string&);

    virtual void
    type (const ::std::string&);

    virtual ::ossie::ComponentFile
    post_componentfile ();

    private:
    std::auto_ptr<ossie::ComponentFile> componentFile;
  };

  class localfile_pimpl: public virtual localfile_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    name (const ::std::string&);

    virtual ::std::string
    post_localfile ();

    private:
    std::string filename;
  };

  class partitioning_pimpl: public virtual partitioning_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    componentplacement (const ::ossie::ComponentPlacement&);

    virtual ::std::vector<ossie::ComponentPlacement>
    post_partitioning ();

    private:
    std::vector<ossie::ComponentPlacement> componentPlacements;
  };

  class componentplacement_pimpl: public virtual componentplacement_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    componentfileref (const ::std::string&);

    virtual void
    deployondevice (const ::std::string&);

    virtual void
    compositepartofdevice (const ::std::string&);

    virtual void
    devicepkgfile ();

    virtual void
    componentinstantiation (const ::ossie::ComponentInstantiation&);

    virtual ::ossie::ComponentPlacement
    post_componentplacement ();

    private:
    std::auto_ptr<ossie::ComponentPlacement> componentPlacement;
  };

  class componentfileref_pimpl: public virtual componentfileref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    refid (const ::std::string&);

    virtual ::std::string
    post_componentfileref ();

    private:
    std::string _refid;
  };

  class deployondevice_pimpl: public virtual deployondevice_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    refid (const ::std::string&);

    virtual ::std::string
    post_deployondevice ();

    private:
    std::string deployondevice;
  };

  class compositepartofdevice_pimpl: public virtual compositepartofdevice_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    refid (const ::std::string&);

    virtual ::std::string
    post_compositepartofdevice ();

    private:
    std::string compositepartofdevice;
  };

  class devicepkgfile_pimpl: public virtual devicepkgfile_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    localfile (const ::std::string&);

    virtual void
    type (const ::std::string&);

    virtual void
    post_devicepkgfile ();
  };

  class componentinstantiation_pimpl: public virtual componentinstantiation_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    usagename (const ::std::string&);

    virtual void
    componentproperties (const ::std::vector<ossie::ComponentProperty*>&);

    virtual void
    id (const ::std::string&);

    virtual ::ossie::ComponentInstantiation
    post_componentinstantiation ();

    private:
    std::auto_ptr<ossie::ComponentInstantiation> componentInstantiation;
  };

  class componentproperties_pimpl: public virtual componentproperties_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    simpleref (ossie::SimplePropertyRef*);

    virtual void
    simplesequenceref (ossie::SimpleSequencePropertyRef*);

    virtual void
    structref (ossie::StructPropertyRef*);

    virtual void
    structsequenceref (ossie::StructSequencePropertyRef*);

    virtual ::std::vector<ossie::ComponentProperty*>
    post_componentproperties ();

    private:
    ::std::vector<ossie::ComponentProperty*> componentProperties;
  };

  class devicethatloadedthiscomponentref_pimpl: public virtual devicethatloadedthiscomponentref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    refid (const ::std::string&);

    virtual std::string
    post_devicethatloadedthiscomponentref ();

    private:
    std::string _refid;
  };

  class deviceusedbythiscomponentref_pimpl: public virtual deviceusedbythiscomponentref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    refid (const ::std::string&);

    virtual void
    usesrefid (const ::std::string&);

    virtual ::std::pair<std::string, std::string>
    post_deviceusedbythiscomponentref ();

    private:
    std::pair<std::string, std::string> info;
  };

  class simpleref_pimpl: public virtual simpleref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    refid (const ::std::string&);

    virtual void
    value (const ::std::string&);

    virtual ossie::SimplePropertyRef*
    post_simpleref ();

    private:
    ossie::SimplePropertyRef* simple;
  };

  class simplesequenceref_pimpl: public virtual simplesequenceref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    values (const ::std::vector<std::string>&);

    virtual void
    refid (const ::std::string&);

    virtual ossie::SimpleSequencePropertyRef*
    post_simplesequenceref ();
    private:
    ossie::SimpleSequencePropertyRef* simpleseq;
  };

  class structref_pimpl: public virtual structref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    simpleref (ossie::SimplePropertyRef*);

    virtual void
    simplesequenceref (ossie::SimpleSequencePropertyRef*);

    virtual void
    refid (const ::std::string&);

    virtual ossie::StructPropertyRef*
    post_structref ();

    private:
    ossie::StructPropertyRef* structref;
  };

  class structsequenceref_pimpl: public virtual structsequenceref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    structvalue (const ::std::map<std::string, ossie::ComponentProperty*>&);

    virtual void
    refid (const ::std::string&);

    virtual ossie::StructSequencePropertyRef*
    post_structsequenceref ();

    private:
    ossie::StructSequencePropertyRef* structsequenceref;
  };

  class structvalue_pimpl: public virtual structvalue_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    simpleref (ossie::SimplePropertyRef*);

    virtual void
    simplesequenceref (ossie::SimpleSequencePropertyRef*);

    virtual ::std::map<std::string, ossie::ComponentProperty*>
    post_structvalue ();

    private:
    std::map<std::string, ossie::ComponentProperty*> values;
  };

  class values_pimpl: public virtual values_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    value (const ::std::string&);

    virtual ::std::vector<std::string>
    post_values ();

    private:
    ::std::vector<std::string> values;
  };

  class componentinstantiationref_pimpl: public virtual componentinstantiationref_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    refid (const ::std::string&);

    virtual ::std::string
    post_componentinstantiationref ();
    private:
    std::string _refid;
  };

  class domainmanager_pimpl: public virtual domainmanager_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    namingservice (const ::std::string&);

    virtual void
    stringifiedobjectref (const ::std::string&);

    virtual ::std::string
    post_domainmanager ();
    
    private:
    std::string domainmanager;
  };

  class findby_pimpl: public virtual findby_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    namingservice (const ::std::string&);

    virtual void
    stringifiedobjectref (const ::std::string&);

    virtual void
    domainfinder (const ::std::pair<std::string, std::string>&);

    virtual ::ossie::FindBy
    post_findby ();

    private:
    std::auto_ptr<ossie::FindBy> findby;
  };

  class namingservice_pimpl: public virtual namingservice_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    name (const ::std::string&);

    virtual ::std::string
    post_namingservice ();

    private:
    std::string _name;
  };

  class domainfinder_pimpl: public virtual domainfinder_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    type (const ::std::string&);

    virtual void
    name (const ::std::string&);

    virtual ::std::pair<std::string, std::string>
    post_domainfinder ();

    private:
    ::std::pair<std::string, std::string> domainfinder;
  };

  class filesystemnames_pimpl: public virtual filesystemnames_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    filesystemname ();

    virtual void
    post_filesystemnames ();
  };

  class filesystemname_pimpl: public virtual filesystemname_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    mountname (const ::std::string&);

    virtual void
    deviceid (const ::std::string&);

    virtual void
    post_filesystemname ();
  };

  class connections_pimpl: public virtual connections_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    connectinterface (const ::ossie::Connection&);

    virtual ::std::vector<ossie::Connection>
    post_connections ();

    private:
    ::std::vector<ossie::Connection> connections;
  };

  class connectinterface_pimpl: public virtual connectinterface_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    usesport (const ::ossie::UsesPort&);

    virtual void
    providesport (const ::ossie::ProvidesPort&);

    virtual void
    componentsupportedinterface (const ::ossie::ComponentSupportedInterface&);

    virtual void
    findby (const ::ossie::FindBy&);

    virtual void
    id (const ::std::string&);

    virtual ::ossie::Connection
    post_connectinterface ();

    private:
    std::auto_ptr<ossie::Connection> connection;
  };

  class usesport_pimpl: public virtual usesport_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    usesidentifier (const ::std::string&);

    virtual void
    componentinstantiationref (const ::std::string&);

    virtual void
    devicethatloadedthiscomponentref (const ::std::string&);

    virtual void
    deviceusedbythiscomponentref (const ::std::pair<std::string, std::string>&);

    virtual void
    findby (const ::ossie::FindBy&);

    virtual ::ossie::UsesPort
    post_usesport ();

    private:
    std::auto_ptr<ossie::UsesPort> usesPort;
  };

  class providesport_pimpl: public virtual providesport_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    providesidentifier (const ::std::string&);

    virtual void
    componentinstantiationref (const ::std::string&);

    virtual void
    devicethatloadedthiscomponentref (const std::string&);

    virtual void
    deviceusedbythiscomponentref (const ::std::pair<std::string, std::string>&);

    virtual void
    findby (const ::ossie::FindBy&);

    virtual ::ossie::ProvidesPort
    post_providesport ();

    private:
    std::auto_ptr<ossie::ProvidesPort> provPort;
  };

  class componentsupportedinterface_pimpl: public virtual componentsupportedinterface_pskel
  {
    public:
    virtual void
    pre ();

    virtual void
    supportedidentifier (const ::std::string&);

    virtual void
    componentinstantiationref (const ::std::string&);

    virtual void
    findby (const ::ossie::FindBy&);

    virtual ::ossie::ComponentSupportedInterface
    post_componentsupportedinterface ();

    private:
    std::auto_ptr<ossie::ComponentSupportedInterface> ciface;
  };
}

#endif // CXX___XML_XSD_DCD_PIMPL_H
