//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

__attribute__((visibility("hidden")))
@interface CATActiveIDSServiceConnectionContentClose : NSObject
{
    NSError *_error;	// 8 = 0x8
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x001000000003b7ea
- (void).cxx_destruct;	// IMP=0x000000000003b8c9
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long contentType;
- (id)initWithError:(id)arg1;	// IMP=0x000000000003b6c7
- (id)init;	// IMP=0x000000000003b6b3

@end

