typedef struct _NDIS_IPSEC_PACKET_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ void* OffloadHandle;
      /* 0x0004 */ void* NextOffloadHandle;
    } /* size: 0x0008 */ Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long SA_DELETE_REQ : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long CRYPTO_DONE : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long NEXT_CRYPTO_DONE : 1; /* bit position: 2 */
      }; /* bitfield */
      /* 0x0004 */ unsigned long CryptoStatus;
    } /* size: 0x0008 */ Receive;
  }; /* size: 0x0008 */
} NDIS_IPSEC_PACKET_INFO, *PNDIS_IPSEC_PACKET_INFO; /* size: 0x0008 */

