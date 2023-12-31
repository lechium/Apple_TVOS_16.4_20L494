//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VSAccountChannels;

__attribute__((visibility("hidden")))
@interface VSAccountsArchive : NSObject
{
    NSArray *_accounts;	// 8 = 0x8
    VSAccountChannels *_channels;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000004ebad
- (void).cxx_destruct;	// IMP=0x000000000004efa4
@property(copy, nonatomic) VSAccountChannels *channels; // @synthesize channels=_channels;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ee75
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004ec06
- (id)init;	// IMP=0x000000000004ebb5

@end

