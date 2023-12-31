//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectModel, NSString;

__attribute__((visibility("hidden")))
@interface NotesMigrationMapping : NSObject
{
    NSManagedObjectModel *_destinationModel;	// 8 = 0x8
    NSArray *_sourceModels;	// 16 = 0x10
    NSString *_descriptionString;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

+ (id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2;	// IMP=0x00600000000136b0
+ (id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2;	// IMP=0x0060000000013418
+ (id)mappings;	// IMP=0x00600000000132f9
+ (id)modelForModelName:(id)arg1;	// IMP=0x0060000000013210
+ (id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2;	// IMP=0x0060000000012f67
- (void).cxx_destruct;	// IMP=0x0000000000013d9d
@property long long type; // @synthesize type=_type;
@property(copy) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(copy) NSArray *sourceModels; // @synthesize sourceModels=_sourceModels;
@property(retain) NSManagedObjectModel *destinationModel; // @synthesize destinationModel=_destinationModel;
- (id)description;	// IMP=0x0000000000013c7e
- (_Bool)canMigrateStoreMetadata:(id)arg1;	// IMP=0x0000000000013ab0
- (id)mappingModelForStoreMetadata:(id)arg1;	// IMP=0x000000000001390c
- (id)sourceModelForStoreMetadata:(id)arg1;	// IMP=0x000000000001387f

@end

