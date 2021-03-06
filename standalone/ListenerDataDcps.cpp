//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ListenerDataDcps.cpp
//  Source: ListenerDataDcps.idl
//  Generated: Tue Dec 19 20:04:59 2017
//  OpenSplice 6.8.3
//  
//******************************************************************

#include "ListenerDataDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < ListenerData::Msg, struct MsgSeq_uniq_>;
#endif

const char * ListenerData::MsgTypeSupportInterface::_local_id = "IDL:ListenerData/MsgTypeSupportInterface:1.0";

ListenerData::MsgTypeSupportInterface_ptr ListenerData::MsgTypeSupportInterface::_duplicate (ListenerData::MsgTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ListenerData::MsgTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, ListenerData::MsgTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ListenerData::MsgTypeSupportInterface_ptr ListenerData::MsgTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (ListenerData::MsgTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < ListenerData::MsgTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ListenerData::MsgTypeSupportInterface_ptr ListenerData::MsgTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgTypeSupportInterface_ptr result;
   result = dynamic_cast < ListenerData::MsgTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ListenerData::MsgDataWriter::_local_id = "IDL:ListenerData/MsgDataWriter:1.0";

ListenerData::MsgDataWriter_ptr ListenerData::MsgDataWriter::_duplicate (ListenerData::MsgDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ListenerData::MsgDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, ListenerData::MsgDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ListenerData::MsgDataWriter_ptr ListenerData::MsgDataWriter::_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgDataWriter_ptr result = NULL;
   if (p && p->_is_a (ListenerData::MsgDataWriter::_local_id))
   {
      result = dynamic_cast < ListenerData::MsgDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ListenerData::MsgDataWriter_ptr ListenerData::MsgDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgDataWriter_ptr result;
   result = dynamic_cast < ListenerData::MsgDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ListenerData::MsgDataReader::_local_id = "IDL:ListenerData/MsgDataReader:1.0";

ListenerData::MsgDataReader_ptr ListenerData::MsgDataReader::_duplicate (ListenerData::MsgDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ListenerData::MsgDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, ListenerData::MsgDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ListenerData::MsgDataReader_ptr ListenerData::MsgDataReader::_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgDataReader_ptr result = NULL;
   if (p && p->_is_a (ListenerData::MsgDataReader::_local_id))
   {
      result = dynamic_cast < ListenerData::MsgDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ListenerData::MsgDataReader_ptr ListenerData::MsgDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgDataReader_ptr result;
   result = dynamic_cast < ListenerData::MsgDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ListenerData::MsgDataReaderView::_local_id = "IDL:ListenerData/MsgDataReaderView:1.0";

ListenerData::MsgDataReaderView_ptr ListenerData::MsgDataReaderView::_duplicate (ListenerData::MsgDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ListenerData::MsgDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, ListenerData::MsgDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ListenerData::MsgDataReaderView_ptr ListenerData::MsgDataReaderView::_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgDataReaderView_ptr result = NULL;
   if (p && p->_is_a (ListenerData::MsgDataReaderView::_local_id))
   {
      result = dynamic_cast < ListenerData::MsgDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ListenerData::MsgDataReaderView_ptr ListenerData::MsgDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   ListenerData::MsgDataReaderView_ptr result;
   result = dynamic_cast < ListenerData::MsgDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



