//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TRIAppContainer;
@protocol TRIPaths;

@protocol TRIPaths
+ (NSString *)resolveHardCodedPath:(NSString *)arg1;
- (_Bool)validateWithError:(id *)arg1;
- (id <TRIPaths>)pathsForContainer:(TRIAppContainer *)arg1 asClientProcess:(_Bool)arg2;
- (NSString *)decryptionKeyDirForAppleInternal:(_Bool)arg1;
- (NSString *)assetStore;
- (NSString *)localTempDir;
- (NSString *)experimentsDir;
- (NSString *)treatmentsDir;
- (NSString *)deviceIdentifierFile;
- (NSString *)systemDataFile;
- (NSString *)subjectDataFile;
- (NSString *)namespaceDescriptorsDevOverrideDir;
- (NSString *)namespaceDescriptorsExperimentDir;
- (NSString *)namespaceDescriptorsRolloutDir;
- (NSString *)namespaceDescriptorsDefaultDir;
- (NSString *)namespaceDescriptorsPathForLayer:(unsigned long long)arg1;
- (NSString *)namespaceDescriptorsDir;
- (TRIAppContainer *)container;
- (NSString *)containerDir;
- (NSString *)logDir;
- (NSString *)databaseDir;
- (NSString *)trialRootVolume;
- (NSString *)trialRootDirUsingGlobal:(_Bool)arg1;
- (NSString *)trialRootDir;
@end

