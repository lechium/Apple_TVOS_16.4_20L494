//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (NSEmailAddressString)
+ (id)mf_partialSurnames;	// IMP=0x008000000000a8ca
+ (id)mf_nameExtensions;	// IMP=0x008000000000a7b9
+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(_Bool)arg3;	// IMP=0x0080000000008a2b
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x0080000000016f4d
- (id)mf_trimCommasSpacesQuotes;	// IMP=0x001000000000a9eb
- (_Bool)mf_appearsToBeAnInitial;	// IMP=0x001000000000a97c
- (void)__mf_firstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;	// IMP=0x0010000000009ff9
- (_Bool)mf_hasSameNamesAs:(id)arg1;	// IMP=0x0010000000009db5
- (id)mf_personNameComponents;	// IMP=0x0010000000009d0b
- (id)mf_addressCommentPersonNameComponents;	// IMP=0x0010000000009cbc
- (id)mf_stringByRemovingParentheticals;	// IMP=0x00100000000099da
- (id)mf_emailAddressesWithEquivalentDomains;	// IMP=0x001000000000973b
- (id)mf_copyIDNAEncodedEmailAddress;	// IMP=0x0010000000009707
- (id)mf_copyIDNADecodedEmailAddress;	// IMP=0x00100000000096d3
- (_Bool)mf_isEqualToAddress:(id)arg1;	// IMP=0x00100000000096ba
- (id)mf_addressDomain;	// IMP=0x0010000000009638
- (struct _NSRange)mf_rangeOfAddressDomain;	// IMP=0x001000000000922c
- (_Bool)mf_isLegalEmailAddress;	// IMP=0x0010000000008c8b
- (_Bool)mf_isLegalCommentedEmailAddress;	// IMP=0x0010000000008c60
- (id)mf_copyAddressComment;	// IMP=0x0010000000008a21
- (id)mf_addressComment;	// IMP=0x001000000000895c
- (id)mf_uncommentedAddressRespectingGroups;	// IMP=0x001000000000852a
- (id)mf_uncommentedAddress;	// IMP=0x0010000000008510
- (id)mf_copyUncommentedAddress;	// IMP=0x00100000000080d9
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)arg1;	// IMP=0x001000000000c278
- (id)mf_bestMimeCharsetUsingHint:(unsigned int)arg1;	// IMP=0x001000000000bec8
- (id)_mf_bestMimeCharset:(id)arg1;	// IMP=0x001000000000bcfa
- (id)mf_bestMimeCharset;	// IMP=0x001000000000bce3
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)arg1;	// IMP=0x001000000000dc89
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned int)arg1;	// IMP=0x001000000000d669
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned int)arg1;	// IMP=0x001000000000c9cb
- (id)mf_copyStringByEncodingIDNA;	// IMP=0x0010000000017a75
- (id)mf_copyStringByDecodingIDNA;	// IMP=0x0010000000017a42
- (id)mf_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;	// IMP=0x00100000000179a2
- (id)mf_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;	// IMP=0x001000000001766f
- (id)mf_messageIDSubstring;	// IMP=0x00100000000175da
- (id)mf_SHA1Digest;	// IMP=0x0010000000017531
- (id)mf_MD5Digest;	// IMP=0x001000000001748a
- (id)mf_dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(_Bool)arg2;	// IMP=0x001000000001728e
- (id)mf_dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x001000000001727a
- (long long)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;	// IMP=0x0010000000017125
- (const void *)mf_lossyDefaultCStringBytes;	// IMP=0x0010000000016f90
@end

