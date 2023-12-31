//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GSTemporaryStorage, NSString;
@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSClientManagedLibrary : NSObject
{
    GSTemporaryStorage *_ts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001115d
- (_Bool)generationsRemove:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010ee7
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010c51
@property(readonly, nonatomic) NSString *nameSpace;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

@end

