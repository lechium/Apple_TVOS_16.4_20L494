//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataExtensions)
- (_Bool)mf_immutable;	// IMP=0x007000000000234e
- (id)mf_subdataWithRange:(struct _NSRange)arg1;	// IMP=0x00700000000022be
- (id)mf_encodeBase64HeaderData;	// IMP=0x007000000000c9b5
- (id)mf_encodeModifiedBase64;	// IMP=0x007000000000c9a5
- (id)mf_encodeBase64;	// IMP=0x007000000000c98c
- (id)mf_encodeBase64WithoutLineBreaks;	// IMP=0x007000000000c886
- (id)mf_decodeModifiedBase64;	// IMP=0x007000000000c875
- (id)mf_decodeBase64InRange:(struct _NSRange *)arg1;	// IMP=0x007000000000c869
- (id)mf_decodeBase64;	// IMP=0x007000000000c714
- (id)mf_decodeUuencoded;	// IMP=0x007000000000c67e
- (id)mf_decodeQuotedPrintableForText:(_Bool)arg1;	// IMP=0x007000000000c5cc
- (id)mf_copyHexString;	// IMP=0x007000000000f871
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// IMP=0x007000000000f6cc
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// IMP=0x007000000000f617
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x007000000000f5cd
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;	// IMP=0x007000000000f57f
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1;	// IMP=0x007000000000f534
- (struct _NSRange)mf_rangeOfByteFromSet:(id)arg1;	// IMP=0x007000000000f4f2
- (struct _NSRange)mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x007000000000f458
- (struct _NSRange)mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x007000000000f3eb
- (id)mf_subdataFromIndex:(unsigned long long)arg1;	// IMP=0x007000000000f3a8
- (id)mf_subdataToIndex:(unsigned long long)arg1;	// IMP=0x007000000000f391
- (struct _NSRange)mf_rangeOfRFC822HeaderData;	// IMP=0x007000000000f0b5
- (id)mf_MD5Digest;	// IMP=0x007000000003c120
@end

