//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MPStoreLibraryMappingResponse : NSObject
{
    NSMutableDictionary *_storeIdentifierSetToLibraryIdentifierSet;	// 8 = 0x8
    long long _libraryAddedStatus;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000154416
@property(nonatomic) long long libraryAddedStatus; // @synthesize libraryAddedStatus=_libraryAddedStatus;
- (void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2;	// IMP=0x0000000000154362
- (id)libraryIdentifierSetForIdentifierSet:(id)arg1;	// IMP=0x000000000015434c

@end

