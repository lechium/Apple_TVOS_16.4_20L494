//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (MSVBase64)
+ (id)msv_uuidWithCFUUID:(struct __CFUUID *)arg1;	// IMP=0x0080000000025cad
+ (id)msv_UUIDWithData:(id)arg1;	// IMP=0x0080000000025c25
+ (id)uuidWithMSVBase64UUID:(id)arg1;	// IMP=0x0080000000025bd4
- (const struct __CFUUID *)msv_copyCFUUID;	// IMP=0x0010000000025b9a
- (id)msv_UUIDData;	// IMP=0x0010000000025b23
- (id)MSVBase64UUIDString;	// IMP=0x0010000000025aa2
- (id)initWithMSVBase64UUIDString:(id)arg1;	// IMP=0x00100000000259b7
@end

