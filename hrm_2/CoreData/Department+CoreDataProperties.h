//
//  Department+CoreDataProperties.h
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

#import "Department.h"

NS_ASSUME_NONNULL_BEGIN

@interface Department (CoreDataProperties)

<<<<<<< HEAD
@property (nullable, nonatomic, retain) NSString *departmantName;
@property (nullable, nonatomic, retain) NSSet<Employee *> *employeeOfDepartmentType;

@end

@interface Department (CoreDataGeneratedAccessors)

- (void)addEmployeeOfDepartmentTypeObject:(Employee *)value;
- (void)removeEmployeeOfDepartmentTypeObject:(Employee *)value;
- (void)addEmployeeOfDepartmentType:(NSSet<Employee *> *)values;
- (void)removeEmployeeOfDepartmentType:(NSSet<Employee *> *)values;
=======
@property (nullable, nonatomic, retain) NSNumber *departmant_id;
@property (nullable, nonatomic, retain) NSString *departmantName;
>>>>>>> cc4ea4f... 47023_employee_screen_designI

@end

NS_ASSUME_NONNULL_END
