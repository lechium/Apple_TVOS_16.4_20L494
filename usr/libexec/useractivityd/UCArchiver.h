//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSUUID;

@interface UCArchiver : NSObject
{
    NSURL *_baseURL;	// 8 = 0x8
    NSString *_leaf;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000079c63
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *leaf; // @synthesize leaf=_leaf;
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)archiveURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000079bea
- (id)initWithURL:(id)arg1 typeUUID:(id)arg2;	// IMP=0x0010000000079acc

@end

