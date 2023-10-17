//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _DDUIRapportDevice : NSObject
{
    _Bool _isMine;	// 8 = 0x8
    unsigned int _deviceType;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_accountIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000ac84
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (id)initWithIncomingMessageOptions:(id)arg1;	// IMP=0x000000000000aa46
- (id)initWithRPCompanionLinkDevice:(id)arg1;	// IMP=0x000000000000a8eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

