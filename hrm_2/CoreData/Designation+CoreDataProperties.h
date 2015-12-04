//
//  Designation+CoreDataProperties.h
//  
//
<<<<<<< HEAD
//  Created by Tahia Ata on 12/4/15.
=======
//  Created by Kazi Sharmin Dina on 12/1/15.
>>>>>>> cc4ea4f... 47023_employee_screen_designI
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Designation.h"

NS_ASSUME_NONNULL_BEGIN

@interface Designation (CoreDataProperties)

<<<<<<< HEAD
@property (nullable, nonatomic, retain) NSString *designationName;
@property (nullable, nonatomic, retain) NSSet<Employee *> *employeeOfDesignationType;

@end

@interface Designation (CoreDataGeneratedAccessors)

- (void)addEmployeeOfDesignationTypeObject:(Employee *)value;
- (void)removeEmployeeOfDesignationTypeObject:(Employee *)value;
- (void)addEmployeeOfDesignationType:(NSSet<Employee *> *)values;
- (void)removeEmployeeOfDesignationType:(NSSet<Employee *> *)values;
=======
@property (nullable, nonatomic, retain) NSNumber *designation_id;
@property (nullable, nonatomic, retain) NSString *designationName;
>>>>>>> cc4ea4f... 47023_employee_screen_designI

@end

NS_ASSUME_NONNULL_END
