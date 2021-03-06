//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: dds_IoTDataDcps.h
//  Source: dds_IoTDataDcps.idl
//  Generated: Tue Dec 19 20:00:37 2017
//  OpenSplice 6.8.3
//  
//******************************************************************
#ifndef _DDS_IOTDATADCPS_H_
#define _DDS_IOTDATADCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "dds_IoTData.h"


namespace DDS
{
   namespace IoT
   {

      class IoTDataTypeSupportInterface;

      typedef IoTDataTypeSupportInterface * IoTDataTypeSupportInterface_ptr;
      typedef DDS_DCPSInterface_var < IoTDataTypeSupportInterface> IoTDataTypeSupportInterface_var;
      typedef DDS_DCPSInterface_out < IoTDataTypeSupportInterface> IoTDataTypeSupportInterface_out;


      class IoTDataDataWriter;

      typedef IoTDataDataWriter * IoTDataDataWriter_ptr;
      typedef DDS_DCPSInterface_var < IoTDataDataWriter> IoTDataDataWriter_var;
      typedef DDS_DCPSInterface_out < IoTDataDataWriter> IoTDataDataWriter_out;


      class IoTDataDataReader;

      typedef IoTDataDataReader * IoTDataDataReader_ptr;
      typedef DDS_DCPSInterface_var < IoTDataDataReader> IoTDataDataReader_var;
      typedef DDS_DCPSInterface_out < IoTDataDataReader> IoTDataDataReader_out;


      class IoTDataDataReaderView;

      typedef IoTDataDataReaderView * IoTDataDataReaderView_ptr;
      typedef DDS_DCPSInterface_var < IoTDataDataReaderView> IoTDataDataReaderView_var;
      typedef DDS_DCPSInterface_out < IoTDataDataReaderView> IoTDataDataReaderView_out;

      struct IoTDataSeq_uniq_ {};
      typedef DDS_DCPSUVLSeq < IoTData, struct IoTDataSeq_uniq_> IoTDataSeq;
      typedef DDS_DCPSSequence_var < IoTDataSeq> IoTDataSeq_var;
      typedef DDS_DCPSSequence_out < IoTDataSeq> IoTDataSeq_out;
      class IoTDataTypeSupportInterface
      :
         virtual public TypeSupport
      { 
      public:
         typedef IoTDataTypeSupportInterface_ptr _ptr_type;
         typedef IoTDataTypeSupportInterface_var _var_type;

         static IoTDataTypeSupportInterface_ptr _duplicate (IoTDataTypeSupportInterface_ptr obj);
         DDS::Boolean _local_is_a (const char * id);

         static IoTDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
         static IoTDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
         static IoTDataTypeSupportInterface_ptr _nil () { return 0; }
         static const char * _local_id;
         IoTDataTypeSupportInterface_ptr _this () { return this; }


      protected:
         IoTDataTypeSupportInterface () {};
         ~IoTDataTypeSupportInterface () {};
      private:
         IoTDataTypeSupportInterface (const IoTDataTypeSupportInterface &);
         IoTDataTypeSupportInterface & operator = (const IoTDataTypeSupportInterface &);
      };

      class IoTDataDataWriter
      :
         virtual public DataWriter
      { 
      public:
         typedef IoTDataDataWriter_ptr _ptr_type;
         typedef IoTDataDataWriter_var _var_type;

         static IoTDataDataWriter_ptr _duplicate (IoTDataDataWriter_ptr obj);
         DDS::Boolean _local_is_a (const char * id);

         static IoTDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
         static IoTDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
         static IoTDataDataWriter_ptr _nil () { return 0; }
         static const char * _local_id;
         IoTDataDataWriter_ptr _this () { return this; }

         virtual LongLong register_instance (const IoTData& instance_data) = 0;
         virtual LongLong register_instance_w_timestamp (const IoTData& instance_data, const Time_t& source_timestamp) = 0;
         virtual Long unregister_instance (const IoTData& instance_data, LongLong handle) = 0;
         virtual Long unregister_instance_w_timestamp (const IoTData& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
         virtual Long write (const IoTData& instance_data, LongLong handle) = 0;
         virtual Long write_w_timestamp (const IoTData& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
         virtual Long dispose (const IoTData& instance_data, LongLong handle) = 0;
         virtual Long dispose_w_timestamp (const IoTData& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
         virtual Long writedispose (const IoTData& instance_data, LongLong handle) = 0;
         virtual Long writedispose_w_timestamp (const IoTData& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
         virtual Long get_key_value (IoTData& key_holder, LongLong handle) = 0;
         virtual LongLong lookup_instance (const IoTData& instance_data) = 0;

      protected:
         IoTDataDataWriter () {};
         ~IoTDataDataWriter () {};
      private:
         IoTDataDataWriter (const IoTDataDataWriter &);
         IoTDataDataWriter & operator = (const IoTDataDataWriter &);
      };

      class IoTDataDataReader
      :
         virtual public DataReader
      { 
      public:
         typedef IoTDataDataReader_ptr _ptr_type;
         typedef IoTDataDataReader_var _var_type;

         static IoTDataDataReader_ptr _duplicate (IoTDataDataReader_ptr obj);
         DDS::Boolean _local_is_a (const char * id);

         static IoTDataDataReader_ptr _narrow (DDS::Object_ptr obj);
         static IoTDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
         static IoTDataDataReader_ptr _nil () { return 0; }
         static const char * _local_id;
         IoTDataDataReader_ptr _this () { return this; }

         virtual Long read (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long take (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long read_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
         virtual Long take_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
         virtual Long read_next_sample (IoTData& received_data, SampleInfo& sample_info) = 0;
         virtual Long take_next_sample (IoTData& received_data, SampleInfo& sample_info) = 0;
         virtual Long read_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long take_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long read_next_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long take_next_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long read_next_instance_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
         virtual Long take_next_instance_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
         virtual Long return_loan (IoTDataSeq& received_data, SampleInfoSeq& info_seq) = 0;
         virtual Long get_key_value (IoTData& key_holder, LongLong handle) = 0;
         virtual LongLong lookup_instance (const IoTData& instance) = 0;

      protected:
         IoTDataDataReader () {};
         ~IoTDataDataReader () {};
      private:
         IoTDataDataReader (const IoTDataDataReader &);
         IoTDataDataReader & operator = (const IoTDataDataReader &);
      };

      class IoTDataDataReaderView
      :
         virtual public DataReaderView
      { 
      public:
         typedef IoTDataDataReaderView_ptr _ptr_type;
         typedef IoTDataDataReaderView_var _var_type;

         static IoTDataDataReaderView_ptr _duplicate (IoTDataDataReaderView_ptr obj);
         DDS::Boolean _local_is_a (const char * id);

         static IoTDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
         static IoTDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
         static IoTDataDataReaderView_ptr _nil () { return 0; }
         static const char * _local_id;
         IoTDataDataReaderView_ptr _this () { return this; }

         virtual Long read (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long take (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long read_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
         virtual Long take_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
         virtual Long read_next_sample (IoTData& received_data, SampleInfo& sample_info) = 0;
         virtual Long take_next_sample (IoTData& received_data, SampleInfo& sample_info) = 0;
         virtual Long read_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long take_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long read_next_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long take_next_instance (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
         virtual Long read_next_instance_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
         virtual Long take_next_instance_w_condition (IoTDataSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
         virtual Long return_loan (IoTDataSeq& received_data, SampleInfoSeq& info_seq) = 0;
         virtual Long get_key_value (IoTData& key_holder, LongLong handle) = 0;
         virtual LongLong lookup_instance (const IoTData& instance) = 0;

      protected:
         IoTDataDataReaderView () {};
         ~IoTDataDataReaderView () {};
      private:
         IoTDataDataReaderView (const IoTDataDataReaderView &);
         IoTDataDataReaderView & operator = (const IoTDataDataReaderView &);
      };

   }
}




#endif
