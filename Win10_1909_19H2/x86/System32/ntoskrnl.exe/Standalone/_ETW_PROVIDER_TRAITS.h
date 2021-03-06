typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _ETW_PROVIDER_TRAITS
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE Node;
  /* 0x000c */ unsigned long ReferenceCount;
  /* 0x0010 */ unsigned char Traits[1];
  /* 0x0011 */ char __PADDING__[3];
} ETW_PROVIDER_TRAITS, *PETW_PROVIDER_TRAITS; /* size: 0x0014 */

