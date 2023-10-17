//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CATSharingSentMessage : NSObject
{
    NSData *_content;	// 8 = 0x8
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x001000000001022e
- (void).cxx_destruct;	// IMP=0x0000000000010336
@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithContent:(id)arg1;	// IMP=0x0000000000010092

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

