//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSPhoneNumberIdentification : NSObject
{
    NSString *_phoneNumber;	// 8 = 0x8
    NSString *_phoneToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004322c0
@property(readonly, nonatomic) NSString *phoneToken; // @synthesize phoneToken=_phoneToken;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)initWithPhoneNumber:(id)arg1 phoneToken:(id)arg2;	// IMP=0x0010000000432190

@end

