//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TCCDService;

@interface TCCDAlert : NSObject
{
    int _displayCountlimit;	// 8 = 0x8
    int _persistentStateValue;	// 12 = 0xc
    unsigned long long _persistentStateType;	// 16 = 0x10
    long long _condition;	// 24 = 0x18
    NSString *_platformName;	// 32 = 0x20
    TCCDService *_service;	// 40 = 0x28
    NSDictionary *_configuration;	// 48 = 0x30
    long long _displayPolicy;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003d75e
@property int persistentStateValue; // @synthesize persistentStateValue=_persistentStateValue;
// Error: Property attributes should begin with the type ('T') attribute, property name: displayCountlimit
// Property attributes: (null)

@property(nonatomic) long long displayPolicy; // @synthesize displayPolicy=_displayPolicy;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) TCCDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(nonatomic) long long condition; // @synthesize condition=_condition;
@property(nonatomic) unsigned long long persistentStateType; // @synthesize persistentStateType=_persistentStateType;
- (void)display;	// IMP=0x001000000003d384
- (_Bool)isDisplayableForCondition:(long long)arg1;	// IMP=0x001000000003d28e
- (id)initWithCondition:(long long)arg1 platformName:(id)arg2 service:(id)arg3 displayPolicy:(long long)arg4 persistentStateType:(unsigned long long)arg5 displayCountlimit:(int)arg6 configuration:(id)arg7;	// IMP=0x001000000003d181

@end
