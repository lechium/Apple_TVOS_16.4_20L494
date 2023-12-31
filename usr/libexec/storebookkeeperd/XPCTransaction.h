//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface XPCTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005d61
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;	// IMP=0x0010000000005d19
- (void)close;	// IMP=0x0010000000005cf8
- (void)open;	// IMP=0x0010000000005cb4
- (id)description;	// IMP=0x0010000000005c2a
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000005bbf

@end

