//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSDate, NSString;

@interface CKKSCurrentItemData : NSData
{
    NSString *_uuid;	// 8 = 0x8
    NSDate *_modificationDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b89d5
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (id)description;	// IMP=0x00100000000b88f4
- (id)initWithUUID:(id)arg1;	// IMP=0x00100000000b8875

@end

