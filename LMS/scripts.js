// scripts.js

// Login Form Validation
document.getElementById("loginForm").addEventListener("submit", function (event) {
    event.preventDefault();
    const email = document.getElementById("email").value;
    const password = document.getElementById("password").value;
    if (email && password) {
        alert("Login successful!");
        window.location.href = "dashboard.html";
    } else {
        alert("Please fill in all fields.");
    }
});

// Dynamic Course Listing (Example Data)
document.addEventListener("DOMContentLoaded", function () {
    const courses = [
        { name: "JavaScript Basics", description: "Learn JS", instructor: "John Doe" },
        { name: "HTML & CSS", description: "Web Basics", instructor: "Jane Smith" },
    ];

    const courseList = document.querySelector(".course-list");
    if (courseList) {
        courses.forEach(course => {
            const courseDiv = document.createElement("div");
            courseDiv.innerHTML = `
                <h3>${course.name}</h3>
                <p>${course.description}</p>
                <small>Instructor: ${course.instructor}</small>
                <button>Start Course</button>
            `;
            courseList.appendChild(courseDiv);
        });
    }
});
