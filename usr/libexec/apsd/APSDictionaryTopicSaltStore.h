//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface APSDictionaryTopicSaltStore : NSObject
{
    NSMutableDictionary *_identifierToSalt;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000f8f6
@property(retain, nonatomic) NSMutableDictionary *identifierToSalt; // @synthesize identifierToSalt=_identifierToSalt;
- (id)loadIdentifiersToSaltsForProcessMode:(unsigned long long)arg1;	// IMP=0x001000000000f893
- (_Bool)saveSalt:(id)arg1 forIdentifier:(id)arg2 processMode:(unsigned long long)arg3;	// IMP=0x001000000000f72e
- (id)loadSaltForIdentifier:(id)arg1 processMode:(unsigned long long)arg2;	// IMP=0x001000000000f6ab
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000000f638

@end

